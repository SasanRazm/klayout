
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
*  @file gsiDeclQHttpPart.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHttpPart>
#include <QIODevice>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHttpPart

//  Constructor QHttpPart::QHttpPart()


static void _init_ctor_QHttpPart_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QHttpPart> ();
}

static void _call_ctor_QHttpPart_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHttpPart *> (new QHttpPart ());
}


//  Constructor QHttpPart::QHttpPart(const QHttpPart &other)


static void _init_ctor_QHttpPart_2217 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QHttpPart & > (argspec_0);
  decl->set_return_new<QHttpPart> ();
}

static void _call_ctor_QHttpPart_2217 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHttpPart &arg1 = gsi::arg_reader<const QHttpPart & >() (args, heap);
  ret.write<QHttpPart *> (new QHttpPart (arg1));
}


// bool QHttpPart::operator!=(const QHttpPart &other)


static void _init_f_operator_excl__eq__c2217 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QHttpPart & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2217 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHttpPart &arg1 = gsi::arg_reader<const QHttpPart & >() (args, heap);
  ret.write<bool > ((bool)((QHttpPart *)cls)->operator!= (arg1));
}


// QHttpPart &QHttpPart::operator=(const QHttpPart &other)


static void _init_f_operator_eq__2217 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QHttpPart & > (argspec_0);
  decl->set_return<QHttpPart & > ();
}

static void _call_f_operator_eq__2217 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHttpPart &arg1 = gsi::arg_reader<const QHttpPart & >() (args, heap);
  ret.write<QHttpPart & > ((QHttpPart &)((QHttpPart *)cls)->operator= (arg1));
}


// bool QHttpPart::operator==(const QHttpPart &other)


static void _init_f_operator_eq__eq__c2217 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QHttpPart & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2217 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHttpPart &arg1 = gsi::arg_reader<const QHttpPart & >() (args, heap);
  ret.write<bool > ((bool)((QHttpPart *)cls)->operator== (arg1));
}


// void QHttpPart::setBody(const QByteArray &body)


static void _init_f_setBody_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("body");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBody_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpPart *)cls)->setBody (arg1);
}


// void QHttpPart::setBodyDevice(QIODevice *device)


static void _init_f_setBodyDevice_1447 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBodyDevice_1447 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpPart *)cls)->setBodyDevice (arg1);
}


// void QHttpPart::setHeader(QNetworkRequest::KnownHeaders header, const QVariant &value)


static void _init_f_setHeader_5360 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("header");
  decl->add_arg<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setHeader_5360 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QNetworkRequest::KnownHeaders>::target_type & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpPart *)cls)->setHeader (qt_gsi::QtToCppAdaptor<QNetworkRequest::KnownHeaders>(arg1).cref(), arg2);
}


// void QHttpPart::setRawHeader(const QByteArray &headerName, const QByteArray &headerValue)


static void _init_f_setRawHeader_4510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("headerName");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("headerValue");
  decl->add_arg<const QByteArray & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setRawHeader_4510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const QByteArray &arg2 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpPart *)cls)->setRawHeader (arg1, arg2);
}


// void QHttpPart::swap(QHttpPart &other)


static void _init_f_swap_1522 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QHttpPart & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1522 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QHttpPart &arg1 = gsi::arg_reader<QHttpPart & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpPart *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QHttpPart () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHttpPart::QHttpPart()\nThis method creates an object of class QHttpPart.", &_init_ctor_QHttpPart_0, &_call_ctor_QHttpPart_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHttpPart::QHttpPart(const QHttpPart &other)\nThis method creates an object of class QHttpPart.", &_init_ctor_QHttpPart_2217, &_call_ctor_QHttpPart_2217);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QHttpPart::operator!=(const QHttpPart &other)\n", true, &_init_f_operator_excl__eq__c2217, &_call_f_operator_excl__eq__c2217);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHttpPart &QHttpPart::operator=(const QHttpPart &other)\n", false, &_init_f_operator_eq__2217, &_call_f_operator_eq__2217);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QHttpPart::operator==(const QHttpPart &other)\n", true, &_init_f_operator_eq__eq__c2217, &_call_f_operator_eq__eq__c2217);
  methods += new qt_gsi::GenericMethod ("setBody", "@brief Method void QHttpPart::setBody(const QByteArray &body)\n", false, &_init_f_setBody_2309, &_call_f_setBody_2309);
  methods += new qt_gsi::GenericMethod ("setBodyDevice", "@brief Method void QHttpPart::setBodyDevice(QIODevice *device)\n", false, &_init_f_setBodyDevice_1447, &_call_f_setBodyDevice_1447);
  methods += new qt_gsi::GenericMethod ("setHeader", "@brief Method void QHttpPart::setHeader(QNetworkRequest::KnownHeaders header, const QVariant &value)\n", false, &_init_f_setHeader_5360, &_call_f_setHeader_5360);
  methods += new qt_gsi::GenericMethod ("setRawHeader", "@brief Method void QHttpPart::setRawHeader(const QByteArray &headerName, const QByteArray &headerValue)\n", false, &_init_f_setRawHeader_4510, &_call_f_setRawHeader_4510);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QHttpPart::swap(QHttpPart &other)\n", false, &_init_f_swap_1522, &_call_f_swap_1522);
  return methods;
}

gsi::Class<QHttpPart> decl_QHttpPart ("QtNetwork", "QHttpPart",
  methods_QHttpPart (),
  "@qt\n@brief Binding of QHttpPart");


GSI_QTNETWORK_PUBLIC gsi::Class<QHttpPart> &qtdecl_QHttpPart () { return decl_QHttpPart; }

}

