object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 231
  ClientWidth = 505
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 24
    Top = 104
    Width = 105
    Height = 105
  end
  object Button1: TButton
    Left = 24
    Top = 59
    Width = 75
    Height = 25
    Caption = 'search'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 24
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'pic1-30'
  end
  object Memo1: TMemo
    Left = 255
    Top = 16
    Width = 234
    Height = 193
    HelpType = htKeyword
    Lines.Strings = (
      'Memo1')
    TabOrder = 2
  end
  object XMLDocument1: TXMLDocument
    FileName = 'C:\Users\keks\Desktop\workstation\IT\Win32\Debug\rab.xml'
    Left = 176
    Top = 32
  end
end
