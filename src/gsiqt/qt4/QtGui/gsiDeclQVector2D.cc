
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
*  @file gsiDeclQVector2D.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVector2D>
#include <QPoint>
#include <QPointF>
#include <QVector3D>
#include <QVector4D>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVector2D

//  Constructor QVector2D::QVector2D()


static void _init_ctor_QVector2D_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVector2D> ();
}

static void _call_ctor_QVector2D_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector2D *> (new QVector2D ());
}


//  Constructor QVector2D::QVector2D(double xpos, double ypos)


static void _init_ctor_QVector2D_2034 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("xpos");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("ypos");
  decl->add_arg<double > (argspec_1);
  decl->set_return_new<QVector2D> ();
}

static void _call_ctor_QVector2D_2034 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QVector2D *> (new QVector2D (arg1, arg2));
}


//  Constructor QVector2D::QVector2D(const QPoint &point)


static void _init_ctor_QVector2D_1916 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return_new<QVector2D> ();
}

static void _call_ctor_QVector2D_1916 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QVector2D *> (new QVector2D (arg1));
}


//  Constructor QVector2D::QVector2D(const QPointF &point)


static void _init_ctor_QVector2D_1986 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("point");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return_new<QVector2D> ();
}

static void _call_ctor_QVector2D_1986 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QVector2D *> (new QVector2D (arg1));
}


//  Constructor QVector2D::QVector2D(const QVector3D &vector)


static void _init_ctor_QVector2D_2140 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector3D & > (argspec_0);
  decl->set_return_new<QVector2D> ();
}

static void _call_ctor_QVector2D_2140 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector3D &arg1 = gsi::arg_reader<const QVector3D & >() (args, heap);
  ret.write<QVector2D *> (new QVector2D (arg1));
}


//  Constructor QVector2D::QVector2D(const QVector4D &vector)


static void _init_ctor_QVector2D_2141 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector4D & > (argspec_0);
  decl->set_return_new<QVector2D> ();
}

static void _call_ctor_QVector2D_2141 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector4D &arg1 = gsi::arg_reader<const QVector4D & >() (args, heap);
  ret.write<QVector2D *> (new QVector2D (arg1));
}


// bool QVector2D::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVector2D *)cls)->isNull ());
}


// double QVector2D::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QVector2D *)cls)->length ());
}


// double QVector2D::lengthSquared()


static void _init_f_lengthSquared_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_lengthSquared_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QVector2D *)cls)->lengthSquared ());
}


// void QVector2D::normalize()


static void _init_f_normalize_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_normalize_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector2D *)cls)->normalize ();
}


// QVector2D QVector2D::normalized()


static void _init_f_normalized_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector2D > ();
}

static void _call_f_normalized_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector2D > ((QVector2D)((QVector2D *)cls)->normalized ());
}


// QVector2D &QVector2D::operator*=(double factor)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QVector2D & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QVector2D & > ((QVector2D &)((QVector2D *)cls)->operator*= (arg1));
}


// QVector2D &QVector2D::operator*=(const QVector2D &vector)


static void _init_f_operator_star__eq__2139 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector2D & > (argspec_0);
  decl->set_return<QVector2D & > ();
}

static void _call_f_operator_star__eq__2139 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector2D &arg1 = gsi::arg_reader<const QVector2D & >() (args, heap);
  ret.write<QVector2D & > ((QVector2D &)((QVector2D *)cls)->operator*= (arg1));
}


// QVector2D &QVector2D::operator+=(const QVector2D &vector)


static void _init_f_operator_plus__eq__2139 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector2D & > (argspec_0);
  decl->set_return<QVector2D & > ();
}

static void _call_f_operator_plus__eq__2139 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector2D &arg1 = gsi::arg_reader<const QVector2D & >() (args, heap);
  ret.write<QVector2D & > ((QVector2D &)((QVector2D *)cls)->operator+= (arg1));
}


// QVector2D &QVector2D::operator-=(const QVector2D &vector)


static void _init_f_operator_minus__eq__2139 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("vector");
  decl->add_arg<const QVector2D & > (argspec_0);
  decl->set_return<QVector2D & > ();
}

static void _call_f_operator_minus__eq__2139 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector2D &arg1 = gsi::arg_reader<const QVector2D & >() (args, heap);
  ret.write<QVector2D & > ((QVector2D &)((QVector2D *)cls)->operator-= (arg1));
}


// QVector2D &QVector2D::operator/=(double divisor)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("divisor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QVector2D & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QVector2D & > ((QVector2D &)((QVector2D *)cls)->operator/= (arg1));
}


// void QVector2D::setX(double x)


static void _init_f_setX_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setX_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector2D *)cls)->setX (arg1);
}


// void QVector2D::setY(double y)


static void _init_f_setY_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setY_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVector2D *)cls)->setY (arg1);
}


// QPoint QVector2D::toPoint()


static void _init_f_toPoint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_toPoint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QVector2D *)cls)->toPoint ());
}


// QPointF QVector2D::toPointF()


static void _init_f_toPointF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_toPointF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QVector2D *)cls)->toPointF ());
}


// QVector3D QVector2D::toVector3D()


static void _init_f_toVector3D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector3D > ();
}

static void _call_f_toVector3D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector3D > ((QVector3D)((QVector2D *)cls)->toVector3D ());
}


// QVector4D QVector2D::toVector4D()


static void _init_f_toVector4D_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector4D > ();
}

static void _call_f_toVector4D_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector4D > ((QVector4D)((QVector2D *)cls)->toVector4D ());
}


// double QVector2D::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QVector2D *)cls)->x ());
}


// double QVector2D::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QVector2D *)cls)->y ());
}


// static double QVector2D::dotProduct(const QVector2D &v1, const QVector2D &v2)


static void _init_f_dotProduct_4170 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v1");
  decl->add_arg<const QVector2D & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("v2");
  decl->add_arg<const QVector2D & > (argspec_1);
  decl->set_return<double > ();
}

static void _call_f_dotProduct_4170 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector2D &arg1 = gsi::arg_reader<const QVector2D & >() (args, heap);
  const QVector2D &arg2 = gsi::arg_reader<const QVector2D & >() (args, heap);
  ret.write<double > ((double)QVector2D::dotProduct (arg1, arg2));
}


//  bool ::operator==(const QVector2D &v1, const QVector2D &v2)
static bool op_QVector2D_operator_eq__eq__4170(const QVector2D *_self, const QVector2D &v2) {
  return ::operator==(*_self, v2);
}

//  bool ::operator!=(const QVector2D &v1, const QVector2D &v2)
static bool op_QVector2D_operator_excl__eq__4170(const QVector2D *_self, const QVector2D &v2) {
  return ::operator!=(*_self, v2);
}

//  const QVector2D ::operator+(const QVector2D &v1, const QVector2D &v2)
static const QVector2D op_QVector2D_operator_plus__4170(const QVector2D *_self, const QVector2D &v2) {
  return ::operator+(*_self, v2);
}

//  const QVector2D ::operator-(const QVector2D &v1, const QVector2D &v2)
static const QVector2D op_QVector2D_operator_minus__4170(const QVector2D *_self, const QVector2D &v2) {
  return ::operator-(*_self, v2);
}

//  const QVector2D ::operator*(const QVector2D &vector, qreal factor)
static const QVector2D op_QVector2D_operator_star__3000(const QVector2D *_self, qreal factor) {
  return ::operator*(*_self, factor);
}

//  const QVector2D ::operator*(const QVector2D &v1, const QVector2D &v2)
static const QVector2D op_QVector2D_operator_star__4170(const QVector2D *_self, const QVector2D &v2) {
  return ::operator*(*_self, v2);
}

//  const QVector2D ::operator-(const QVector2D &vector)
static const QVector2D op_QVector2D_operator_minus__2139(const QVector2D *_self) {
  return ::operator-(*_self);
}

//  const QVector2D ::operator/(const QVector2D &vector, qreal divisor)
static const QVector2D op_QVector2D_operator_slash__3000(const QVector2D *_self, qreal divisor) {
  return ::operator/(*_self, divisor);
}


namespace gsi
{

static gsi::Methods methods_QVector2D () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector2D::QVector2D()\nThis method creates an object of class QVector2D.", &_init_ctor_QVector2D_0, &_call_ctor_QVector2D_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector2D::QVector2D(double xpos, double ypos)\nThis method creates an object of class QVector2D.", &_init_ctor_QVector2D_2034, &_call_ctor_QVector2D_2034);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector2D::QVector2D(const QPoint &point)\nThis method creates an object of class QVector2D.", &_init_ctor_QVector2D_1916, &_call_ctor_QVector2D_1916);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector2D::QVector2D(const QPointF &point)\nThis method creates an object of class QVector2D.", &_init_ctor_QVector2D_1986, &_call_ctor_QVector2D_1986);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector2D::QVector2D(const QVector3D &vector)\nThis method creates an object of class QVector2D.", &_init_ctor_QVector2D_2140, &_call_ctor_QVector2D_2140);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVector2D::QVector2D(const QVector4D &vector)\nThis method creates an object of class QVector2D.", &_init_ctor_QVector2D_2141, &_call_ctor_QVector2D_2141);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QVector2D::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method double QVector2D::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("lengthSquared", "@brief Method double QVector2D::lengthSquared()\n", true, &_init_f_lengthSquared_c0, &_call_f_lengthSquared_c0);
  methods += new qt_gsi::GenericMethod ("normalize", "@brief Method void QVector2D::normalize()\n", false, &_init_f_normalize_0, &_call_f_normalize_0);
  methods += new qt_gsi::GenericMethod ("normalized", "@brief Method QVector2D QVector2D::normalized()\n", true, &_init_f_normalized_c0, &_call_f_normalized_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QVector2D &QVector2D::operator*=(double factor)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QVector2D &QVector2D::operator*=(const QVector2D &vector)\n", false, &_init_f_operator_star__eq__2139, &_call_f_operator_star__eq__2139);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QVector2D &QVector2D::operator+=(const QVector2D &vector)\n", false, &_init_f_operator_plus__eq__2139, &_call_f_operator_plus__eq__2139);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QVector2D &QVector2D::operator-=(const QVector2D &vector)\n", false, &_init_f_operator_minus__eq__2139, &_call_f_operator_minus__eq__2139);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QVector2D &QVector2D::operator/=(double divisor)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod ("setX|x=", "@brief Method void QVector2D::setX(double x)\n", false, &_init_f_setX_1071, &_call_f_setX_1071);
  methods += new qt_gsi::GenericMethod ("setY|y=", "@brief Method void QVector2D::setY(double y)\n", false, &_init_f_setY_1071, &_call_f_setY_1071);
  methods += new qt_gsi::GenericMethod ("toPoint", "@brief Method QPoint QVector2D::toPoint()\n", true, &_init_f_toPoint_c0, &_call_f_toPoint_c0);
  methods += new qt_gsi::GenericMethod ("toPointF", "@brief Method QPointF QVector2D::toPointF()\n", true, &_init_f_toPointF_c0, &_call_f_toPointF_c0);
  methods += new qt_gsi::GenericMethod ("toVector3D", "@brief Method QVector3D QVector2D::toVector3D()\n", true, &_init_f_toVector3D_c0, &_call_f_toVector3D_c0);
  methods += new qt_gsi::GenericMethod ("toVector4D", "@brief Method QVector4D QVector2D::toVector4D()\n", true, &_init_f_toVector4D_c0, &_call_f_toVector4D_c0);
  methods += new qt_gsi::GenericMethod (":x", "@brief Method double QVector2D::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod (":y", "@brief Method double QVector2D::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  methods += new qt_gsi::GenericStaticMethod ("dotProduct", "@brief Static method double QVector2D::dotProduct(const QVector2D &v1, const QVector2D &v2)\nThis method is static and can be called without an instance.", &_init_f_dotProduct_4170, &_call_f_dotProduct_4170);
  methods += gsi::method_ext("==", &::op_QVector2D_operator_eq__eq__4170, gsi::arg ("v2"), "@brief Operator bool ::operator==(const QVector2D &v1, const QVector2D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QVector2D_operator_excl__eq__4170, gsi::arg ("v2"), "@brief Operator bool ::operator!=(const QVector2D &v1, const QVector2D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QVector2D_operator_plus__4170, gsi::arg ("v2"), "@brief Operator const QVector2D ::operator+(const QVector2D &v1, const QVector2D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QVector2D_operator_minus__4170, gsi::arg ("v2"), "@brief Operator const QVector2D ::operator-(const QVector2D &v1, const QVector2D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector2D_operator_star__3000, gsi::arg ("factor"), "@brief Operator const QVector2D ::operator*(const QVector2D &vector, qreal factor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QVector2D_operator_star__4170, gsi::arg ("v2"), "@brief Operator const QVector2D ::operator*(const QVector2D &v1, const QVector2D &v2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QVector2D_operator_minus__2139, "@brief Operator const QVector2D ::operator-(const QVector2D &vector)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QVector2D_operator_slash__3000, gsi::arg ("divisor"), "@brief Operator const QVector2D ::operator/(const QVector2D &vector, qreal divisor)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QVector2D> decl_QVector2D ("QtGui", "QVector2D",
  methods_QVector2D (),
  "@qt\n@brief Binding of QVector2D");


GSI_QTGUI_PUBLIC gsi::Class<QVector2D> &qtdecl_QVector2D () { return decl_QVector2D; }

}

