// rdedit_panel_name.h
//
// Edit a SoundPanel Panel Name
//
//   (C) Copyright 2002-2007 Fred Gleason <fredg@paravelsystems.com>
//
//      $Id: rdedit_panel_name.h,v 1.3 2010/07/29 19:32:33 cvs Exp $
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License version 2 as
//   published by the Free Software Foundation.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public
//   License along with this program; if not, write to the Free Software
//   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#ifndef RDEDIT_PANEL_NAME_H
#define RDEDIT_PANEL_NAME_H

#include <qdialog.h>
#include <qlineedit.h>


class RDEditPanelName : public QDialog
{
  Q_OBJECT
 public:
  RDEditPanelName(QString *panelname,QWidget *parent=0,const char *name=0);
  QSize sizeHint() const;
  QSizePolicy sizePolicy() const;
  
 private slots:
  void okData();
  void cancelData();

 private:
  QLineEdit *panel_name_edit;
  QString *panel_name;
};


#endif  // RDEDIT_PANEL_NAME
