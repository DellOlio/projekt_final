object TimeOrganizerForm: TTimeOrganizerForm
  Left = 0
  Top = 0
  Caption = 'Time organizer'
  ClientHeight = 532
  ClientWidth = 633
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnClose = FormClose
  TextHeight = 15
  object Label1: TLabel
    Left = 62
    Top = 387
    Width = 32
    Height = 15
    Caption = 'Name'
  end
  object Label2: TLabel
    Left = 62
    Top = 432
    Width = 46
    Height = 15
    Caption = 'Duration'
  end
  object Label3: TLabel
    Left = 62
    Top = 483
    Width = 48
    Height = 15
    Caption = 'Difficulty'
  end
  object Label4: TLabel
    Left = 352
    Top = 387
    Width = 75
    Height = 15
    Caption = 'Available time'
  end
  object ListView1: TListView
    Left = 56
    Top = 8
    Width = 545
    Height = 257
    Columns = <
      item
        AutoSize = True
        Caption = 'Name'
      end
      item
        AutoSize = True
        Caption = 'Duration'
      end
      item
        AutoSize = True
        Caption = 'Difficulty'
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object XmlLoadButton: TButton
    Left = 56
    Top = 304
    Width = 113
    Height = 41
    Caption = 'Load tasks'
    TabOrder = 1
    OnClick = XmlLoadButtonClick
  end
  object AddTaskButton: TButton
    Left = 208
    Top = 304
    Width = 105
    Height = 41
    Caption = 'Add task'
    TabOrder = 2
    OnClick = AddTaskButtonClick
  end
  object DeleteTaskButton: TButton
    Left = 352
    Top = 304
    Width = 105
    Height = 41
    Caption = 'Delete task'
    TabOrder = 3
    OnClick = DeleteTaskButtonClick
  end
  object EditTaskButton: TButton
    Left = 496
    Top = 304
    Width = 105
    Height = 41
    Caption = 'Edit task'
    TabOrder = 4
    OnClick = EditTaskButtonClick
  end
  object NameEdit: TEdit
    Left = 136
    Top = 384
    Width = 153
    Height = 23
    TabOrder = 5
  end
  object DurationEdit: TEdit
    Left = 136
    Top = 429
    Width = 153
    Height = 23
    NumbersOnly = True
    TabOrder = 6
  end
  object DifficultyEdit: TEdit
    Left = 136
    Top = 480
    Width = 153
    Height = 23
    TabOrder = 7
  end
  object FreeTimeEdit: TEdit
    Left = 456
    Top = 384
    Width = 145
    Height = 23
    NumbersOnly = True
    TabOrder = 8
  end
  object CheckFreeTimeButton: TButton
    Left = 390
    Top = 429
    Width = 155
    Height = 53
    Caption = 'Recommended task'
    TabOrder = 9
    OnClick = CheckFreeTimeButtonClick
  end
  object XMLDocument: TXMLDocument
    FileName = './tasks.xml'
    Left = 240
    Top = 128
  end
end
