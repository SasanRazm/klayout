
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
*  @file gsiDeclQMediaTimeRange.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaTimeRange>
#include <QMediaTimeInterval>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaTimeRange

//  Constructor QMediaTimeRange::QMediaTimeRange()


static void _init_ctor_QMediaTimeRange_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaTimeRange> ();
}

static void _call_ctor_QMediaTimeRange_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaTimeRange *> (new QMediaTimeRange ());
}


//  Constructor QMediaTimeRange::QMediaTimeRange(qint64 start, qint64 end)


static void _init_ctor_QMediaTimeRange_1864 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("end");
  decl->add_arg<qint64 > (argspec_1);
  decl->set_return_new<QMediaTimeRange> ();
}

static void _call_ctor_QMediaTimeRange_1864 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  qint64 arg2 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<QMediaTimeRange *> (new QMediaTimeRange (arg1, arg2));
}


//  Constructor QMediaTimeRange::QMediaTimeRange(const QMediaTimeInterval &)


static void _init_ctor_QMediaTimeRange_3110 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeInterval & > (argspec_0);
  decl->set_return_new<QMediaTimeRange> ();
}

static void _call_ctor_QMediaTimeRange_3110 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeInterval &arg1 = gsi::arg_reader<const QMediaTimeInterval & >() (args, heap);
  ret.write<QMediaTimeRange *> (new QMediaTimeRange (arg1));
}


//  Constructor QMediaTimeRange::QMediaTimeRange(const QMediaTimeRange &range)


static void _init_ctor_QMediaTimeRange_2766 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("range");
  decl->add_arg<const QMediaTimeRange & > (argspec_0);
  decl->set_return_new<QMediaTimeRange> ();
}

static void _call_ctor_QMediaTimeRange_2766 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeRange &arg1 = gsi::arg_reader<const QMediaTimeRange & >() (args, heap);
  ret.write<QMediaTimeRange *> (new QMediaTimeRange (arg1));
}


// void QMediaTimeRange::addInterval(qint64 start, qint64 end)


static void _init_f_addInterval_1864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("end");
  decl->add_arg<qint64 > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_addInterval_1864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  qint64 arg2 = gsi::arg_reader<qint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->addInterval (arg1, arg2);
}


// void QMediaTimeRange::addInterval(const QMediaTimeInterval &interval)


static void _init_f_addInterval_3110 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("interval");
  decl->add_arg<const QMediaTimeInterval & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addInterval_3110 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeInterval &arg1 = gsi::arg_reader<const QMediaTimeInterval & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->addInterval (arg1);
}


// void QMediaTimeRange::addTimeRange(const QMediaTimeRange &)


static void _init_f_addTimeRange_2766 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeRange & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_addTimeRange_2766 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeRange &arg1 = gsi::arg_reader<const QMediaTimeRange & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->addTimeRange (arg1);
}


// void QMediaTimeRange::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->clear ();
}


// bool QMediaTimeRange::contains(qint64 time)


static void _init_f_contains_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("time");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  ret.write<bool > ((bool)((QMediaTimeRange *)cls)->contains (arg1));
}


// qint64 QMediaTimeRange::earliestTime()


static void _init_f_earliestTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_earliestTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QMediaTimeRange *)cls)->earliestTime ());
}


// QList<QMediaTimeInterval> QMediaTimeRange::intervals()


static void _init_f_intervals_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QMediaTimeInterval> > ();
}

static void _call_f_intervals_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QMediaTimeInterval> > ((QList<QMediaTimeInterval>)((QMediaTimeRange *)cls)->intervals ());
}


// bool QMediaTimeRange::isContinuous()


static void _init_f_isContinuous_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isContinuous_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaTimeRange *)cls)->isContinuous ());
}


// bool QMediaTimeRange::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMediaTimeRange *)cls)->isEmpty ());
}


// qint64 QMediaTimeRange::latestTime()


static void _init_f_latestTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_latestTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QMediaTimeRange *)cls)->latestTime ());
}


// QMediaTimeRange &QMediaTimeRange::operator+=(const QMediaTimeRange &)


static void _init_f_operator_plus__eq__2766 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeRange & > (argspec_0);
  decl->set_return<QMediaTimeRange & > ();
}

static void _call_f_operator_plus__eq__2766 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeRange &arg1 = gsi::arg_reader<const QMediaTimeRange & >() (args, heap);
  ret.write<QMediaTimeRange & > ((QMediaTimeRange &)((QMediaTimeRange *)cls)->operator+= (arg1));
}


// QMediaTimeRange &QMediaTimeRange::operator+=(const QMediaTimeInterval &)


static void _init_f_operator_plus__eq__3110 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeInterval & > (argspec_0);
  decl->set_return<QMediaTimeRange & > ();
}

static void _call_f_operator_plus__eq__3110 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeInterval &arg1 = gsi::arg_reader<const QMediaTimeInterval & >() (args, heap);
  ret.write<QMediaTimeRange & > ((QMediaTimeRange &)((QMediaTimeRange *)cls)->operator+= (arg1));
}


// QMediaTimeRange &QMediaTimeRange::operator-=(const QMediaTimeRange &)


static void _init_f_operator_minus__eq__2766 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeRange & > (argspec_0);
  decl->set_return<QMediaTimeRange & > ();
}

static void _call_f_operator_minus__eq__2766 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeRange &arg1 = gsi::arg_reader<const QMediaTimeRange & >() (args, heap);
  ret.write<QMediaTimeRange & > ((QMediaTimeRange &)((QMediaTimeRange *)cls)->operator-= (arg1));
}


// QMediaTimeRange &QMediaTimeRange::operator-=(const QMediaTimeInterval &)


static void _init_f_operator_minus__eq__3110 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeInterval & > (argspec_0);
  decl->set_return<QMediaTimeRange & > ();
}

static void _call_f_operator_minus__eq__3110 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeInterval &arg1 = gsi::arg_reader<const QMediaTimeInterval & >() (args, heap);
  ret.write<QMediaTimeRange & > ((QMediaTimeRange &)((QMediaTimeRange *)cls)->operator-= (arg1));
}


// QMediaTimeRange &QMediaTimeRange::operator=(const QMediaTimeRange &)


static void _init_f_operator_eq__2766 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeRange & > (argspec_0);
  decl->set_return<QMediaTimeRange & > ();
}

static void _call_f_operator_eq__2766 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeRange &arg1 = gsi::arg_reader<const QMediaTimeRange & >() (args, heap);
  ret.write<QMediaTimeRange & > ((QMediaTimeRange &)((QMediaTimeRange *)cls)->operator= (arg1));
}


// QMediaTimeRange &QMediaTimeRange::operator=(const QMediaTimeInterval &)


static void _init_f_operator_eq__3110 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeInterval & > (argspec_0);
  decl->set_return<QMediaTimeRange & > ();
}

static void _call_f_operator_eq__3110 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeInterval &arg1 = gsi::arg_reader<const QMediaTimeInterval & >() (args, heap);
  ret.write<QMediaTimeRange & > ((QMediaTimeRange &)((QMediaTimeRange *)cls)->operator= (arg1));
}


// void QMediaTimeRange::removeInterval(qint64 start, qint64 end)


static void _init_f_removeInterval_1864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("start");
  decl->add_arg<qint64 > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("end");
  decl->add_arg<qint64 > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_removeInterval_1864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  qint64 arg2 = gsi::arg_reader<qint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->removeInterval (arg1, arg2);
}


// void QMediaTimeRange::removeInterval(const QMediaTimeInterval &interval)


static void _init_f_removeInterval_3110 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("interval");
  decl->add_arg<const QMediaTimeInterval & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeInterval_3110 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeInterval &arg1 = gsi::arg_reader<const QMediaTimeInterval & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->removeInterval (arg1);
}


// void QMediaTimeRange::removeTimeRange(const QMediaTimeRange &)


static void _init_f_removeTimeRange_2766 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMediaTimeRange & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeTimeRange_2766 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMediaTimeRange &arg1 = gsi::arg_reader<const QMediaTimeRange & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaTimeRange *)cls)->removeTimeRange (arg1);
}


//  bool ::operator==(const QMediaTimeRange &, const QMediaTimeRange &)
static bool op_QMediaTimeRange_operator_eq__eq__5424(const QMediaTimeRange *_self, const QMediaTimeRange &arg2) {
  return operator==(*_self, arg2);
}

//  bool ::operator!=(const QMediaTimeRange &, const QMediaTimeRange &)
static bool op_QMediaTimeRange_operator_excl__eq__5424(const QMediaTimeRange *_self, const QMediaTimeRange &arg2) {
  return operator!=(*_self, arg2);
}

//  QMediaTimeRange ::operator+(const QMediaTimeRange &, const QMediaTimeRange &)
static QMediaTimeRange op_QMediaTimeRange_operator_plus__5424(const QMediaTimeRange *_self, const QMediaTimeRange &arg2) {
  return operator+(*_self, arg2);
}

//  QMediaTimeRange ::operator-(const QMediaTimeRange &, const QMediaTimeRange &)
static QMediaTimeRange op_QMediaTimeRange_operator_minus__5424(const QMediaTimeRange *_self, const QMediaTimeRange &arg2) {
  return operator-(*_self, arg2);
}


namespace gsi
{

static gsi::Methods methods_QMediaTimeRange () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaTimeRange::QMediaTimeRange()\nThis method creates an object of class QMediaTimeRange.", &_init_ctor_QMediaTimeRange_0, &_call_ctor_QMediaTimeRange_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaTimeRange::QMediaTimeRange(qint64 start, qint64 end)\nThis method creates an object of class QMediaTimeRange.", &_init_ctor_QMediaTimeRange_1864, &_call_ctor_QMediaTimeRange_1864);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaTimeRange::QMediaTimeRange(const QMediaTimeInterval &)\nThis method creates an object of class QMediaTimeRange.", &_init_ctor_QMediaTimeRange_3110, &_call_ctor_QMediaTimeRange_3110);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaTimeRange::QMediaTimeRange(const QMediaTimeRange &range)\nThis method creates an object of class QMediaTimeRange.", &_init_ctor_QMediaTimeRange_2766, &_call_ctor_QMediaTimeRange_2766);
  methods += new qt_gsi::GenericMethod ("addInterval", "@brief Method void QMediaTimeRange::addInterval(qint64 start, qint64 end)\n", false, &_init_f_addInterval_1864, &_call_f_addInterval_1864);
  methods += new qt_gsi::GenericMethod ("addInterval", "@brief Method void QMediaTimeRange::addInterval(const QMediaTimeInterval &interval)\n", false, &_init_f_addInterval_3110, &_call_f_addInterval_3110);
  methods += new qt_gsi::GenericMethod ("addTimeRange", "@brief Method void QMediaTimeRange::addTimeRange(const QMediaTimeRange &)\n", false, &_init_f_addTimeRange_2766, &_call_f_addTimeRange_2766);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QMediaTimeRange::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QMediaTimeRange::contains(qint64 time)\n", true, &_init_f_contains_c986, &_call_f_contains_c986);
  methods += new qt_gsi::GenericMethod ("earliestTime", "@brief Method qint64 QMediaTimeRange::earliestTime()\n", true, &_init_f_earliestTime_c0, &_call_f_earliestTime_c0);
  methods += new qt_gsi::GenericMethod ("intervals", "@brief Method QList<QMediaTimeInterval> QMediaTimeRange::intervals()\n", true, &_init_f_intervals_c0, &_call_f_intervals_c0);
  methods += new qt_gsi::GenericMethod ("isContinuous?", "@brief Method bool QMediaTimeRange::isContinuous()\n", true, &_init_f_isContinuous_c0, &_call_f_isContinuous_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QMediaTimeRange::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("latestTime", "@brief Method qint64 QMediaTimeRange::latestTime()\n", true, &_init_f_latestTime_c0, &_call_f_latestTime_c0);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QMediaTimeRange &QMediaTimeRange::operator+=(const QMediaTimeRange &)\n", false, &_init_f_operator_plus__eq__2766, &_call_f_operator_plus__eq__2766);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QMediaTimeRange &QMediaTimeRange::operator+=(const QMediaTimeInterval &)\n", false, &_init_f_operator_plus__eq__3110, &_call_f_operator_plus__eq__3110);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QMediaTimeRange &QMediaTimeRange::operator-=(const QMediaTimeRange &)\n", false, &_init_f_operator_minus__eq__2766, &_call_f_operator_minus__eq__2766);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QMediaTimeRange &QMediaTimeRange::operator-=(const QMediaTimeInterval &)\n", false, &_init_f_operator_minus__eq__3110, &_call_f_operator_minus__eq__3110);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMediaTimeRange &QMediaTimeRange::operator=(const QMediaTimeRange &)\n", false, &_init_f_operator_eq__2766, &_call_f_operator_eq__2766);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMediaTimeRange &QMediaTimeRange::operator=(const QMediaTimeInterval &)\n", false, &_init_f_operator_eq__3110, &_call_f_operator_eq__3110);
  methods += new qt_gsi::GenericMethod ("removeInterval", "@brief Method void QMediaTimeRange::removeInterval(qint64 start, qint64 end)\n", false, &_init_f_removeInterval_1864, &_call_f_removeInterval_1864);
  methods += new qt_gsi::GenericMethod ("removeInterval", "@brief Method void QMediaTimeRange::removeInterval(const QMediaTimeInterval &interval)\n", false, &_init_f_removeInterval_3110, &_call_f_removeInterval_3110);
  methods += new qt_gsi::GenericMethod ("removeTimeRange", "@brief Method void QMediaTimeRange::removeTimeRange(const QMediaTimeRange &)\n", false, &_init_f_removeTimeRange_2766, &_call_f_removeTimeRange_2766);
  methods += gsi::method_ext("==", &::op_QMediaTimeRange_operator_eq__eq__5424, gsi::arg ("arg2"), "@brief Operator bool ::operator==(const QMediaTimeRange &, const QMediaTimeRange &)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QMediaTimeRange_operator_excl__eq__5424, gsi::arg ("arg2"), "@brief Operator bool ::operator!=(const QMediaTimeRange &, const QMediaTimeRange &)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QMediaTimeRange_operator_plus__5424, gsi::arg ("arg2"), "@brief Operator QMediaTimeRange ::operator+(const QMediaTimeRange &, const QMediaTimeRange &)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QMediaTimeRange_operator_minus__5424, gsi::arg ("arg2"), "@brief Operator QMediaTimeRange ::operator-(const QMediaTimeRange &, const QMediaTimeRange &)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QMediaTimeRange> decl_QMediaTimeRange ("QtMultimedia", "QMediaTimeRange",
  methods_QMediaTimeRange (),
  "@qt\n@brief Binding of QMediaTimeRange");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaTimeRange> &qtdecl_QMediaTimeRange () { return decl_QMediaTimeRange; }

}

