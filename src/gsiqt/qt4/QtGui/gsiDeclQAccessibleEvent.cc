
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQAccessibleEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleEvent

//  Constructor QAccessibleEvent::QAccessibleEvent(QEvent::Type type, int child)


static void _init_ctor_QAccessibleEvent_2224 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QAccessibleEvent> ();
}

static void _call_ctor_QAccessibleEvent_2224 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QAccessibleEvent *> (new QAccessibleEvent (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2));
}


// int QAccessibleEvent::child()


static void _init_f_child_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_child_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAccessibleEvent *)cls)->child ());
}


// void QAccessibleEvent::setValue(const QString &aText)


static void _init_f_setValue_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("aText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setValue_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleEvent *)cls)->setValue (arg1);
}


// QString QAccessibleEvent::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QAccessibleEvent *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QAccessibleEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleEvent::QAccessibleEvent(QEvent::Type type, int child)\nThis method creates an object of class QAccessibleEvent.", &_init_ctor_QAccessibleEvent_2224, &_call_ctor_QAccessibleEvent_2224);
  methods += new qt_gsi::GenericMethod ("child", "@brief Method int QAccessibleEvent::child()\n", true, &_init_f_child_c0, &_call_f_child_c0);
  methods += new qt_gsi::GenericMethod ("setValue|value=", "@brief Method void QAccessibleEvent::setValue(const QString &aText)\n", false, &_init_f_setValue_2025, &_call_f_setValue_2025);
  methods += new qt_gsi::GenericMethod (":value", "@brief Method QString QAccessibleEvent::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QAccessibleEvent> decl_QAccessibleEvent (qtdecl_QEvent (), "QtGui", "QAccessibleEvent",
  methods_QAccessibleEvent (),
  "@qt\n@brief Binding of QAccessibleEvent");


GSI_QTGUI_PUBLIC gsi::Class<QAccessibleEvent> &qtdecl_QAccessibleEvent () { return decl_QAccessibleEvent; }

}

