
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
*  @file gsiDeclQJsonValue.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonValue

//  Constructor QJsonValue::QJsonValue(QJsonValue::Type)


static void _init_ctor_QJsonValue_1970 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "QJsonValue::Null");
  decl->add_arg<const qt_gsi::Converter<QJsonValue::Type>::target_type & > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_1970 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QJsonValue::Type>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QJsonValue::Type>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QJsonValue::Type>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QJsonValue::Type>(heap, QJsonValue::Null), heap);
  ret.write<QJsonValue *> (new QJsonValue (qt_gsi::QtToCppAdaptor<QJsonValue::Type>(arg1).cref()));
}


//  Constructor QJsonValue::QJsonValue(bool b)


static void _init_ctor_QJsonValue_864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


//  Constructor QJsonValue::QJsonValue(double n)


static void _init_ctor_QJsonValue_1071 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<double > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_1071 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


//  Constructor QJsonValue::QJsonValue(qint64 n)


static void _init_ctor_QJsonValue_986 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_986 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


//  Constructor QJsonValue::QJsonValue(const QString &s)


static void _init_ctor_QJsonValue_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


//  Constructor QJsonValue::QJsonValue(const QJsonArray &a)


static void _init_ctor_QJsonValue_2315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_2315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = gsi::arg_reader<const QJsonArray & >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


//  Constructor QJsonValue::QJsonValue(const QJsonObject &o)


static void _init_ctor_QJsonValue_2403 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_2403 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = gsi::arg_reader<const QJsonObject & >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


//  Constructor QJsonValue::QJsonValue(const QJsonValue &other)


static void _init_ctor_QJsonValue_2313 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return_new<QJsonValue> ();
}

static void _call_ctor_QJsonValue_2313 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<QJsonValue *> (new QJsonValue (arg1));
}


// bool QJsonValue::isArray()


static void _init_f_isArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isArray ());
}


// bool QJsonValue::isBool()


static void _init_f_isBool_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBool_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isBool ());
}


// bool QJsonValue::isDouble()


static void _init_f_isDouble_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDouble_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isDouble ());
}


// bool QJsonValue::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isNull ());
}


// bool QJsonValue::isObject()


static void _init_f_isObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isObject ());
}


// bool QJsonValue::isString()


static void _init_f_isString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isString ());
}


// bool QJsonValue::isUndefined()


static void _init_f_isUndefined_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUndefined_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValue *)cls)->isUndefined ());
}


// QJsonValue &QJsonValue::operator =(const QJsonValue &other)


static void _init_f_operator_eq__2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<QJsonValue & > ();
}

static void _call_f_operator_eq__2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<QJsonValue & > ((QJsonValue &)((QJsonValue *)cls)->operator = (arg1));
}


// bool QJsonValue::operator!=(const QJsonValue &other)


static void _init_f_operator_excl__eq__c2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<bool > ((bool)((QJsonValue *)cls)->operator!= (arg1));
}


// bool QJsonValue::operator==(const QJsonValue &other)


static void _init_f_operator_eq__eq__c2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<bool > ((bool)((QJsonValue *)cls)->operator== (arg1));
}


// const QJsonValue QJsonValue::operator[](const QString &key)


static void _init_f_operator_index__c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonValue *)cls)->operator[] (arg1));
}


// const QJsonValue QJsonValue::operator[](int i)


static void _init_f_operator_index__c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonValue *)cls)->operator[] (arg1));
}


// void QJsonValue::swap(QJsonValue &other)


static void _init_f_swap_1618 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QJsonValue & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1618 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonValue &arg1 = gsi::arg_reader<QJsonValue & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QJsonValue *)cls)->swap (arg1);
}


// QJsonArray QJsonValue::toArray()


static void _init_f_toArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray > ();
}

static void _call_f_toArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray > ((QJsonArray)((QJsonValue *)cls)->toArray ());
}


// QJsonArray QJsonValue::toArray(const QJsonArray &defaultValue)


static void _init_f_toArray_c2315 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue");
  decl->add_arg<const QJsonArray & > (argspec_0);
  decl->set_return<QJsonArray > ();
}

static void _call_f_toArray_c2315 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonArray &arg1 = gsi::arg_reader<const QJsonArray & >() (args, heap);
  ret.write<QJsonArray > ((QJsonArray)((QJsonValue *)cls)->toArray (arg1));
}


// bool QJsonValue::toBool(bool defaultValue)


static void _init_f_toBool_c864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "false");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_toBool_c864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (false, heap);
  ret.write<bool > ((bool)((QJsonValue *)cls)->toBool (arg1));
}


// double QJsonValue::toDouble(double defaultValue)


static void _init_f_toDouble_c1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "0");
  decl->add_arg<double > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_toDouble_c1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args ? gsi::arg_reader<double >() (args, heap) : gsi::arg_maker<double >() (0, heap);
  ret.write<double > ((double)((QJsonValue *)cls)->toDouble (arg1));
}


// int QJsonValue::toInt(int defaultValue)


static void _init_f_toInt_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_toInt_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<int > ((int)((QJsonValue *)cls)->toInt (arg1));
}


// QJsonObject QJsonValue::toObject()


static void _init_f_toObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject > ();
}

static void _call_f_toObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject > ((QJsonObject)((QJsonValue *)cls)->toObject ());
}


// QJsonObject QJsonValue::toObject(const QJsonObject &defaultValue)


static void _init_f_toObject_c2403 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue");
  decl->add_arg<const QJsonObject & > (argspec_0);
  decl->set_return<QJsonObject > ();
}

static void _call_f_toObject_c2403 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonObject &arg1 = gsi::arg_reader<const QJsonObject & >() (args, heap);
  ret.write<QJsonObject > ((QJsonObject)((QJsonValue *)cls)->toObject (arg1));
}


// QString QJsonValue::toString()


static void _init_f_toString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_toString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QJsonValue *)cls)->toString ());
}


// QString QJsonValue::toString(const QString &defaultValue)


static void _init_f_toString_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QString > ((QString)((QJsonValue *)cls)->toString (arg1));
}


// QVariant QJsonValue::toVariant()


static void _init_f_toVariant_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_toVariant_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QJsonValue *)cls)->toVariant ());
}


// QJsonValue::Type QJsonValue::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QJsonValue::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QJsonValue::Type>::target_type > ((qt_gsi::Converter<QJsonValue::Type>::target_type)qt_gsi::CppToQtAdaptor<QJsonValue::Type>(((QJsonValue *)cls)->type ()));
}


// static QJsonValue QJsonValue::fromVariant(const QVariant &variant)


static void _init_f_fromVariant_2119 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("variant");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<QJsonValue > ();
}

static void _call_f_fromVariant_2119 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  ret.write<QJsonValue > ((QJsonValue)QJsonValue::fromVariant (arg1));
}



namespace gsi
{

static gsi::Methods methods_QJsonValue () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(QJsonValue::Type)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_1970, &_call_ctor_QJsonValue_1970);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(bool b)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_864, &_call_ctor_QJsonValue_864);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(double n)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_1071, &_call_ctor_QJsonValue_1071);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(qint64 n)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_986, &_call_ctor_QJsonValue_986);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(const QString &s)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_2025, &_call_ctor_QJsonValue_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(const QJsonArray &a)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_2315, &_call_ctor_QJsonValue_2315);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(const QJsonObject &o)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_2403, &_call_ctor_QJsonValue_2403);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValue::QJsonValue(const QJsonValue &other)\nThis method creates an object of class QJsonValue.", &_init_ctor_QJsonValue_2313, &_call_ctor_QJsonValue_2313);
  methods += new qt_gsi::GenericMethod ("isArray?", "@brief Method bool QJsonValue::isArray()\n", true, &_init_f_isArray_c0, &_call_f_isArray_c0);
  methods += new qt_gsi::GenericMethod ("isBool?", "@brief Method bool QJsonValue::isBool()\n", true, &_init_f_isBool_c0, &_call_f_isBool_c0);
  methods += new qt_gsi::GenericMethod ("isDouble?", "@brief Method bool QJsonValue::isDouble()\n", true, &_init_f_isDouble_c0, &_call_f_isDouble_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QJsonValue::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isObject?", "@brief Method bool QJsonValue::isObject()\n", true, &_init_f_isObject_c0, &_call_f_isObject_c0);
  methods += new qt_gsi::GenericMethod ("isString?", "@brief Method bool QJsonValue::isString()\n", true, &_init_f_isString_c0, &_call_f_isString_c0);
  methods += new qt_gsi::GenericMethod ("isUndefined?", "@brief Method bool QJsonValue::isUndefined()\n", true, &_init_f_isUndefined_c0, &_call_f_isUndefined_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QJsonValue &QJsonValue::operator =(const QJsonValue &other)\n", false, &_init_f_operator_eq__2313, &_call_f_operator_eq__2313);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonValue::operator!=(const QJsonValue &other)\n", true, &_init_f_operator_excl__eq__c2313, &_call_f_operator_excl__eq__c2313);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonValue::operator==(const QJsonValue &other)\n", true, &_init_f_operator_eq__eq__c2313, &_call_f_operator_eq__eq__c2313);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonValue::operator[](const QString &key)\n", true, &_init_f_operator_index__c2025, &_call_f_operator_index__c2025);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonValue::operator[](int i)\n", true, &_init_f_operator_index__c767, &_call_f_operator_index__c767);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QJsonValue::swap(QJsonValue &other)\n", false, &_init_f_swap_1618, &_call_f_swap_1618);
  methods += new qt_gsi::GenericMethod ("toArray", "@brief Method QJsonArray QJsonValue::toArray()\n", true, &_init_f_toArray_c0, &_call_f_toArray_c0);
  methods += new qt_gsi::GenericMethod ("toArray", "@brief Method QJsonArray QJsonValue::toArray(const QJsonArray &defaultValue)\n", true, &_init_f_toArray_c2315, &_call_f_toArray_c2315);
  methods += new qt_gsi::GenericMethod ("toBool", "@brief Method bool QJsonValue::toBool(bool defaultValue)\n", true, &_init_f_toBool_c864, &_call_f_toBool_c864);
  methods += new qt_gsi::GenericMethod ("toDouble", "@brief Method double QJsonValue::toDouble(double defaultValue)\n", true, &_init_f_toDouble_c1071, &_call_f_toDouble_c1071);
  methods += new qt_gsi::GenericMethod ("toInt", "@brief Method int QJsonValue::toInt(int defaultValue)\n", true, &_init_f_toInt_c767, &_call_f_toInt_c767);
  methods += new qt_gsi::GenericMethod ("toObject", "@brief Method QJsonObject QJsonValue::toObject()\n", true, &_init_f_toObject_c0, &_call_f_toObject_c0);
  methods += new qt_gsi::GenericMethod ("toObject", "@brief Method QJsonObject QJsonValue::toObject(const QJsonObject &defaultValue)\n", true, &_init_f_toObject_c2403, &_call_f_toObject_c2403);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QJsonValue::toString()\n", true, &_init_f_toString_c0, &_call_f_toString_c0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QJsonValue::toString(const QString &defaultValue)\n", true, &_init_f_toString_c2025, &_call_f_toString_c2025);
  methods += new qt_gsi::GenericMethod ("toVariant", "@brief Method QVariant QJsonValue::toVariant()\n", true, &_init_f_toVariant_c0, &_call_f_toVariant_c0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QJsonValue::Type QJsonValue::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromVariant", "@brief Static method QJsonValue QJsonValue::fromVariant(const QVariant &variant)\nThis method is static and can be called without an instance.", &_init_f_fromVariant_2119, &_call_f_fromVariant_2119);
  return methods;
}

gsi::Class<QJsonValue> decl_QJsonValue ("QtCore", "QJsonValue",
  methods_QJsonValue (),
  "@qt\n@brief Binding of QJsonValue");


GSI_QTCORE_PUBLIC gsi::Class<QJsonValue> &qtdecl_QJsonValue () { return decl_QJsonValue; }

}


//  Implementation of the enum wrapper class for QJsonValue::Type
namespace qt_gsi
{

static gsi::Enum<QJsonValue::Type> decl_QJsonValue_Type_Enum ("QtCore", "QJsonValue_Type",
    gsi::enum_const ("Null", QJsonValue::Null, "@brief Enum constant QJsonValue::Null") +
    gsi::enum_const ("Bool", QJsonValue::Bool, "@brief Enum constant QJsonValue::Bool") +
    gsi::enum_const ("Double", QJsonValue::Double, "@brief Enum constant QJsonValue::Double") +
    gsi::enum_const ("String", QJsonValue::String, "@brief Enum constant QJsonValue::String") +
    gsi::enum_const ("Array", QJsonValue::Array, "@brief Enum constant QJsonValue::Array") +
    gsi::enum_const ("Object", QJsonValue::Object, "@brief Enum constant QJsonValue::Object") +
    gsi::enum_const ("Undefined", QJsonValue::Undefined, "@brief Enum constant QJsonValue::Undefined"),
  "@qt\n@brief This class represents the QJsonValue::Type enum");

static gsi::QFlagsClass<QJsonValue::Type > decl_QJsonValue_Type_Enums ("QtCore", "QJsonValue_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QJsonValue::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QJsonValue> inject_QJsonValue_Type_Enum_in_parent (decl_QJsonValue_Type_Enum.defs ());
static gsi::ClassExt<QJsonValue> decl_QJsonValue_Type_Enum_as_child (decl_QJsonValue_Type_Enum, "Type");
static gsi::ClassExt<QJsonValue> decl_QJsonValue_Type_Enums_as_child (decl_QJsonValue_Type_Enums, "QFlags_Type");

}

