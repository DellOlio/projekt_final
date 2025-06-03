object BugReportForm: TBugReportForm
  Left = 0
  Top = 0
  Caption = 'Bug report'
  ClientHeight = 349
  ClientWidth = 602
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object formPlaceLabel: TLabel
    Left = 32
    Top = 51
    Width = 37
    Height = 15
    Caption = 'Dijalog'
  end
  object DescriptionLabel: TLabel
    Left = 32
    Top = 107
    Width = 24
    Height = 15
    Caption = 'Opis'
  end
  object SaveButton: TButton
    Left = 112
    Top = 224
    Width = 75
    Height = 25
    Caption = 'Spremi'
    TabOrder = 0
    OnClick = SaveButtonClick
  end
  object FormEdit: TEdit
    Left = 112
    Top = 48
    Width = 121
    Height = 23
    TabOrder = 1
  end
  object DescriptionEdit: TEdit
    Left = 112
    Top = 104
    Width = 209
    Height = 23
    TabOrder = 2
  end
  object LoadButton: TButton
    Left = 246
    Top = 224
    Width = 75
    Height = 25
    Caption = 'Ucitaj'
    TabOrder = 3
    OnClick = LoadButtonClick
  end
  object HrBtn: TRadioButton
    Left = 495
    Top = 16
    Width = 113
    Height = 17
    Caption = 'HR'
    Checked = True
    TabOrder = 4
    TabStop = True
    OnClick = HrBtnClick
  end
  object ENGBtn: TRadioButton
    Left = 495
    Top = 51
    Width = 113
    Height = 17
    Caption = 'ENG'
    TabOrder = 5
    OnClick = ENGBtnClick
  end
end
