
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
*  @file gsiDeclQAccessible_State.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessible>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QAccessible::State

//  Constructor QAccessible::State::State()


static void _init_ctor_QAccessible_State_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessible::State> ();
}

static void _call_ctor_QAccessible_State_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessible::State *> (new QAccessible::State ());
}


//  bool ::operator==(const QAccessible::State &first, const QAccessible::State &second)
static bool op_QAccessible_State_operator_eq__eq__5950(const QAccessible::State *_self, const QAccessible::State &second) {
  return operator==(*_self, second);
}


namespace gsi
{

static gsi::Methods methods_QAccessible_State () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessible::State::State()\nThis method creates an object of class QAccessible::State.", &_init_ctor_QAccessible_State_0, &_call_ctor_QAccessible_State_0);
  methods += gsi::method_ext("==", &::op_QAccessible_State_operator_eq__eq__5950, gsi::arg ("second"), "@brief Operator bool ::operator==(const QAccessible::State &first, const QAccessible::State &second)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QAccessible::State> decl_QAccessible_State ("QtGui", "QAccessible_State",
  methods_QAccessible_State (),
  "@qt\n@brief Binding of QAccessible::State");

gsi::ClassExt<QAccessible> decl_QAccessible_State_as_child (decl_QAccessible_State, "State");

GSI_QTGUI_PUBLIC gsi::Class<QAccessible::State> &qtdecl_QAccessible_State () { return decl_QAccessible_State; }

}

