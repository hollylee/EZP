/*-------------------------------------------------------------------
* Name: informc.c
* compiler :  Watcom C 10.0
* Copyright (c) 1994,1995 REDTEK BUSINESS TECHNOLOGY LTD.
-------------------------------------------------------------------*/
#include "ezpHead.h"

#ifdef __ENGLISHMODE__
  static char TitleInformation[][10]={"Error!","Warning!","Hello!"};
  static char InformInformation[][30]=
  {
     "Invaild rotate angle!",
     "Invaild axis x ordinate!",
     "Invaild axis y ordinate!",
     "Invaild box left!",
     "Invaild box top!",
     "Invaild box width!",
     "Invaild box height!",
     "Invaild text left distant!",
     "Invaild text top distant!",
     "Invaild text width distant!",
     "Invaild text height distant!",
     "Invaild round left distant!",
     "Invaild round top distant!",
     "Invaild round width distant!",
     "Invaild round height distant!",
     "Invaild column!",
     "Invaild column distant!",
     "Invaild page width!",
     "Invaild page height!",
     "Invaild page margin left!",
     "Invaild page margin top!",
     "Invaild page margin right!",
     "Invaild page margin bottom!",
     "File has been modifed, save it?",
     "File load error!",
     "File save error!",
     "Invaild char font!",
     "Invaild char size!",
     "Invaild char hor size!",
     "Invaild char slant angle!",
     "Invaild char color!",
     "Invalid file name!",
     "Too many regions!"
  };
#else
  static char TitleInformation[][8]={"����","���棡"};
  static char InformInformation[][40]=
  {
     "��ת�ǲ�����,������",
     "��ת��X���겻����,������",
     "��ת��Y���겻����,������",
     "��������겻����,������",
     "��������겻����,������",
     "�����Ȳ�����,������",
     "���߶Ȳ�����,������",
     "�ı���߿ղ�����,������",
     "�ı��ϱ߿ղ�����,������",
     "�ı��ұ߿ղ�����,������",
     "�ı��±߿ղ�����,������",
     "������߿ղ�����,������",
     "�����ϱ߿ղ�����,������",
     "�����ұ߿ղ�����,������",
     "�����±߿ղ�����,������",
     "��������1-10֮��",
     "����಻����,������",
     "ҳ���Ȳ�����,������",
     "ҳ�߶Ȳ�����,������",
     "��߿ղ�����,������",
     "�ϱ߿ղ�����,������",
     "�ұ߿ղ�����,������",
     "�±߿ղ�����,������",
     "�ļ��ѱ��Ķ�,������?",
     "ȡ�ļ����ɹ�!",
     "���ļ����ɹ�",
     "������Ų�����,������",
     "�ַ���С������,������",
     "�ַ�ˮƽ��С������,������",
     "�ַ���б�ǶȲ�����,������",
     "�ַ���ɫ������,������",
     "�Ҳ������ļ�,����������!",
     "��������̫��,�Ű�����",
     "����ߴ���߿ղ�һ��,������",
  };
#endif

char *GetTitleString(int Number)
{
  if (Number<2)
     return(TitleInformation[Number]);
  return(NULL);
}

char *GetInformString(int Number)
{
  if (Number<MAXINFORM)
     return(InformInformation[Number]);
  return(NULL);
}

unsigned long KeyHelpProcedure(HWND Window,HMSG Message,long Param1,long Param2)
{
  if(Message>10000)
  {
     MessageInsert(Window,DIALOGBOXEND,Message,0l);
     return(TRUE);
  }

  return(DialogDefaultProcedure(Window, Message, Param1, Param2));
}
