//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "rab.h"
#include "System.NetEncoding.hpp"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{

_di_IXMLbodyType body =  Getbody (XMLDocument1);
String base64_str;
String x = Edit1-> Text;
	 for (int i=0; i < body-> Count; i++) {
		 if (body-> Get_pic(i)-> name == x) {
			 base64_str = body-> Get_pic(i)->Get_img()->Get_src();
		 }
   }
   Memo1->Text = base64_str;


	TStringStream *base64_stream = new TStringStream;
	TMemoryStream *img_stream = new TMemoryStream;

	base64_stream -> WriteString(base64_str);

	base64_stream -> Position= 0;
	TNetEncoding::Base64->Decode(base64_stream, img_stream);

	img_stream->Position= 0;
	Image1->Picture->LoadFromStream(img_stream);

	delete img_stream;
	delete base64_stream;

}
//---------------------------------------------------------------------------

