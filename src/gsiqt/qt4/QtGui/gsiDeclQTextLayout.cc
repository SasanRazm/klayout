
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
*  @file gsiDeclQTextLayout.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextLayout>
#include <QFont>
#include <QPaintDevice>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QTextBlock>
#include <QTextLine>
#include <QTextOption>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextLayout

//  Constructor QTextLayout::QTextLayout()


static void _init_ctor_QTextLayout_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextLayout> ();
}

static void _call_ctor_QTextLayout_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextLayout *> (new QTextLayout ());
}


//  Constructor QTextLayout::QTextLayout(const QString &text)


static void _init_ctor_QTextLayout_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QTextLayout> ();
}

static void _call_ctor_QTextLayout_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTextLayout *> (new QTextLayout (arg1));
}


//  Constructor QTextLayout::QTextLayout(const QString &text, const QFont &font, QPaintDevice *paintdevice)


static void _init_ctor_QTextLayout_5413 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("font");
  decl->add_arg<const QFont & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("paintdevice", true, "0");
  decl->add_arg<QPaintDevice * > (argspec_2);
  decl->set_return_new<QTextLayout> ();
}

static void _call_ctor_QTextLayout_5413 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QFont &arg2 = gsi::arg_reader<const QFont & >() (args, heap);
  QPaintDevice *arg3 = args ? gsi::arg_reader<QPaintDevice * >() (args, heap) : gsi::arg_maker<QPaintDevice * >() (0, heap);
  ret.write<QTextLayout *> (new QTextLayout (arg1, arg2, arg3));
}


//  Constructor QTextLayout::QTextLayout(const QTextBlock &b)


static void _init_ctor_QTextLayout_2306 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<const QTextBlock & > (argspec_0);
  decl->set_return_new<QTextLayout> ();
}

static void _call_ctor_QTextLayout_2306 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextBlock &arg1 = gsi::arg_reader<const QTextBlock & >() (args, heap);
  ret.write<QTextLayout *> (new QTextLayout (arg1));
}


// QList<QTextLayout::FormatRange> QTextLayout::additionalFormats()


static void _init_f_additionalFormats_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QTextLayout::FormatRange> > ();
}

static void _call_f_additionalFormats_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QTextLayout::FormatRange> > ((QList<QTextLayout::FormatRange>)((QTextLayout *)cls)->additionalFormats ());
}


// void QTextLayout::beginLayout()


static void _init_f_beginLayout_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_beginLayout_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->beginLayout ();
}


// QRectF QTextLayout::boundingRect()


static void _init_f_boundingRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRectF > ();
}

static void _call_f_boundingRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRectF > ((QRectF)((QTextLayout *)cls)->boundingRect ());
}


// bool QTextLayout::cacheEnabled()


static void _init_f_cacheEnabled_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_cacheEnabled_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextLayout *)cls)->cacheEnabled ());
}


// void QTextLayout::clearAdditionalFormats()


static void _init_f_clearAdditionalFormats_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearAdditionalFormats_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->clearAdditionalFormats ();
}


// void QTextLayout::clearLayout()


static void _init_f_clearLayout_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearLayout_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->clearLayout ();
}


// QTextLine QTextLayout::createLine()


static void _init_f_createLine_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextLine > ();
}

static void _call_f_createLine_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextLine > ((QTextLine)((QTextLayout *)cls)->createLine ());
}


// void QTextLayout::draw(QPainter *p, const QPointF &pos, const QVector<QTextLayout::FormatRange> &selections, const QRectF &clip)


static void _init_f_draw_c9459 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("selections", true, "QVector<QTextLayout::FormatRange>()");
  decl->add_arg<const QVector<QTextLayout::FormatRange> & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("clip", true, "QRectF()");
  decl->add_arg<const QRectF & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_draw_c9459 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QVector<QTextLayout::FormatRange> &arg3 = args ? gsi::arg_reader<const QVector<QTextLayout::FormatRange> & >() (args, heap) : gsi::arg_maker<const QVector<QTextLayout::FormatRange> & >() (QVector<QTextLayout::FormatRange>(), heap);
  const QRectF &arg4 = args ? gsi::arg_reader<const QRectF & >() (args, heap) : gsi::arg_maker<const QRectF & >() (QRectF(), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->draw (arg1, arg2, arg3, arg4);
}


// void QTextLayout::drawCursor(QPainter *p, const QPointF &pos, int cursorPosition)


static void _init_f_drawCursor_c3963 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("cursorPosition");
  decl->add_arg<int > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_drawCursor_c3963 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->drawCursor (arg1, arg2, arg3);
}


// void QTextLayout::drawCursor(QPainter *p, const QPointF &pos, int cursorPosition, int width)


static void _init_f_drawCursor_c4622 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("cursorPosition");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("width");
  decl->add_arg<int > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_drawCursor_c4622 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->drawCursor (arg1, arg2, arg3, arg4);
}


// void QTextLayout::endLayout()


static void _init_f_endLayout_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_endLayout_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->endLayout ();
}


// QFont QTextLayout::font()


static void _init_f_font_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFont > ();
}

static void _call_f_font_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFont > ((QFont)((QTextLayout *)cls)->font ());
}


// bool QTextLayout::isValidCursorPosition(int pos)


static void _init_f_isValidCursorPosition_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isValidCursorPosition_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QTextLayout *)cls)->isValidCursorPosition (arg1));
}


// QTextLine QTextLayout::lineAt(int i)


static void _init_f_lineAt_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextLine > ();
}

static void _call_f_lineAt_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextLine > ((QTextLine)((QTextLayout *)cls)->lineAt (arg1));
}


// int QTextLayout::lineCount()


static void _init_f_lineCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_lineCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextLayout *)cls)->lineCount ());
}


// QTextLine QTextLayout::lineForTextPosition(int pos)


static void _init_f_lineForTextPosition_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextLine > ();
}

static void _call_f_lineForTextPosition_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextLine > ((QTextLine)((QTextLayout *)cls)->lineForTextPosition (arg1));
}


// double QTextLayout::maximumWidth()


static void _init_f_maximumWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_maximumWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLayout *)cls)->maximumWidth ());
}


// double QTextLayout::minimumWidth()


static void _init_f_minimumWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_minimumWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextLayout *)cls)->minimumWidth ());
}


// int QTextLayout::nextCursorPosition(int oldPos, QTextLayout::CursorMode mode)


static void _init_f_nextCursorPosition_c3378 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("oldPos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QTextLayout::SkipCharacters");
  decl->add_arg<const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_nextCursorPosition_c3378 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTextLayout::CursorMode>(heap, QTextLayout::SkipCharacters), heap);
  ret.write<int > ((int)((QTextLayout *)cls)->nextCursorPosition (arg1, qt_gsi::QtToCppAdaptor<QTextLayout::CursorMode>(arg2).cref()));
}


// QPointF QTextLayout::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QTextLayout *)cls)->position ());
}


// int QTextLayout::preeditAreaPosition()


static void _init_f_preeditAreaPosition_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_preeditAreaPosition_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextLayout *)cls)->preeditAreaPosition ());
}


// QString QTextLayout::preeditAreaText()


static void _init_f_preeditAreaText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_preeditAreaText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextLayout *)cls)->preeditAreaText ());
}


// int QTextLayout::previousCursorPosition(int oldPos, QTextLayout::CursorMode mode)


static void _init_f_previousCursorPosition_c3378 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("oldPos");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QTextLayout::SkipCharacters");
  decl->add_arg<const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_previousCursorPosition_c3378 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTextLayout::CursorMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTextLayout::CursorMode>(heap, QTextLayout::SkipCharacters), heap);
  ret.write<int > ((int)((QTextLayout *)cls)->previousCursorPosition (arg1, qt_gsi::QtToCppAdaptor<QTextLayout::CursorMode>(arg2).cref()));
}


// void QTextLayout::setAdditionalFormats(const QList<QTextLayout::FormatRange> &overrides)


static void _init_f_setAdditionalFormats_4294 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("overrides");
  decl->add_arg<const QList<QTextLayout::FormatRange> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAdditionalFormats_4294 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QList<QTextLayout::FormatRange> &arg1 = gsi::arg_reader<const QList<QTextLayout::FormatRange> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setAdditionalFormats (arg1);
}


// void QTextLayout::setCacheEnabled(bool enable)


static void _init_f_setCacheEnabled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("enable");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCacheEnabled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setCacheEnabled (arg1);
}


// void QTextLayout::setFlags(int flags)


static void _init_f_setFlags_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFlags_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setFlags (arg1);
}


// void QTextLayout::setFont(const QFont &f)


static void _init_f_setFont_1801 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f");
  decl->add_arg<const QFont & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFont_1801 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = gsi::arg_reader<const QFont & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setFont (arg1);
}


// void QTextLayout::setPosition(const QPointF &p)


static void _init_f_setPosition_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPosition_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setPosition (arg1);
}


// void QTextLayout::setPreeditArea(int position, const QString &text)


static void _init_f_setPreeditArea_2684 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPreeditArea_2684 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setPreeditArea (arg1, arg2);
}


// void QTextLayout::setText(const QString &string)


static void _init_f_setText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setText (arg1);
}


// void QTextLayout::setTextOption(const QTextOption &option)


static void _init_f_setTextOption_2448 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QTextOption & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextOption_2448 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextOption &arg1 = gsi::arg_reader<const QTextOption & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextLayout *)cls)->setTextOption (arg1);
}


// QString QTextLayout::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTextLayout *)cls)->text ());
}


// QTextOption QTextLayout::textOption()


static void _init_f_textOption_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextOption > ();
}

static void _call_f_textOption_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextOption > ((QTextOption)((QTextLayout *)cls)->textOption ());
}



namespace gsi
{

static gsi::Methods methods_QTextLayout () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextLayout::QTextLayout()\nThis method creates an object of class QTextLayout.", &_init_ctor_QTextLayout_0, &_call_ctor_QTextLayout_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextLayout::QTextLayout(const QString &text)\nThis method creates an object of class QTextLayout.", &_init_ctor_QTextLayout_2025, &_call_ctor_QTextLayout_2025);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextLayout::QTextLayout(const QString &text, const QFont &font, QPaintDevice *paintdevice)\nThis method creates an object of class QTextLayout.", &_init_ctor_QTextLayout_5413, &_call_ctor_QTextLayout_5413);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextLayout::QTextLayout(const QTextBlock &b)\nThis method creates an object of class QTextLayout.", &_init_ctor_QTextLayout_2306, &_call_ctor_QTextLayout_2306);
  methods += new qt_gsi::GenericMethod (":additionalFormats", "@brief Method QList<QTextLayout::FormatRange> QTextLayout::additionalFormats()\n", true, &_init_f_additionalFormats_c0, &_call_f_additionalFormats_c0);
  methods += new qt_gsi::GenericMethod ("beginLayout", "@brief Method void QTextLayout::beginLayout()\n", false, &_init_f_beginLayout_0, &_call_f_beginLayout_0);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRectF QTextLayout::boundingRect()\n", true, &_init_f_boundingRect_c0, &_call_f_boundingRect_c0);
  methods += new qt_gsi::GenericMethod (":cacheEnabled", "@brief Method bool QTextLayout::cacheEnabled()\n", true, &_init_f_cacheEnabled_c0, &_call_f_cacheEnabled_c0);
  methods += new qt_gsi::GenericMethod ("clearAdditionalFormats", "@brief Method void QTextLayout::clearAdditionalFormats()\n", false, &_init_f_clearAdditionalFormats_0, &_call_f_clearAdditionalFormats_0);
  methods += new qt_gsi::GenericMethod ("clearLayout", "@brief Method void QTextLayout::clearLayout()\n", false, &_init_f_clearLayout_0, &_call_f_clearLayout_0);
  methods += new qt_gsi::GenericMethod ("createLine", "@brief Method QTextLine QTextLayout::createLine()\n", false, &_init_f_createLine_0, &_call_f_createLine_0);
  methods += new qt_gsi::GenericMethod ("draw", "@brief Method void QTextLayout::draw(QPainter *p, const QPointF &pos, const QVector<QTextLayout::FormatRange> &selections, const QRectF &clip)\n", true, &_init_f_draw_c9459, &_call_f_draw_c9459);
  methods += new qt_gsi::GenericMethod ("drawCursor", "@brief Method void QTextLayout::drawCursor(QPainter *p, const QPointF &pos, int cursorPosition)\n", true, &_init_f_drawCursor_c3963, &_call_f_drawCursor_c3963);
  methods += new qt_gsi::GenericMethod ("drawCursor", "@brief Method void QTextLayout::drawCursor(QPainter *p, const QPointF &pos, int cursorPosition, int width)\n", true, &_init_f_drawCursor_c4622, &_call_f_drawCursor_c4622);
  methods += new qt_gsi::GenericMethod ("endLayout", "@brief Method void QTextLayout::endLayout()\n", false, &_init_f_endLayout_0, &_call_f_endLayout_0);
  methods += new qt_gsi::GenericMethod (":font", "@brief Method QFont QTextLayout::font()\n", true, &_init_f_font_c0, &_call_f_font_c0);
  methods += new qt_gsi::GenericMethod ("isValidCursorPosition?", "@brief Method bool QTextLayout::isValidCursorPosition(int pos)\n", true, &_init_f_isValidCursorPosition_c767, &_call_f_isValidCursorPosition_c767);
  methods += new qt_gsi::GenericMethod ("lineAt", "@brief Method QTextLine QTextLayout::lineAt(int i)\n", true, &_init_f_lineAt_c767, &_call_f_lineAt_c767);
  methods += new qt_gsi::GenericMethod ("lineCount", "@brief Method int QTextLayout::lineCount()\n", true, &_init_f_lineCount_c0, &_call_f_lineCount_c0);
  methods += new qt_gsi::GenericMethod ("lineForTextPosition", "@brief Method QTextLine QTextLayout::lineForTextPosition(int pos)\n", true, &_init_f_lineForTextPosition_c767, &_call_f_lineForTextPosition_c767);
  methods += new qt_gsi::GenericMethod ("maximumWidth", "@brief Method double QTextLayout::maximumWidth()\n", true, &_init_f_maximumWidth_c0, &_call_f_maximumWidth_c0);
  methods += new qt_gsi::GenericMethod ("minimumWidth", "@brief Method double QTextLayout::minimumWidth()\n", true, &_init_f_minimumWidth_c0, &_call_f_minimumWidth_c0);
  methods += new qt_gsi::GenericMethod ("nextCursorPosition", "@brief Method int QTextLayout::nextCursorPosition(int oldPos, QTextLayout::CursorMode mode)\n", true, &_init_f_nextCursorPosition_c3378, &_call_f_nextCursorPosition_c3378);
  methods += new qt_gsi::GenericMethod (":position", "@brief Method QPointF QTextLayout::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("preeditAreaPosition", "@brief Method int QTextLayout::preeditAreaPosition()\n", true, &_init_f_preeditAreaPosition_c0, &_call_f_preeditAreaPosition_c0);
  methods += new qt_gsi::GenericMethod ("preeditAreaText", "@brief Method QString QTextLayout::preeditAreaText()\n", true, &_init_f_preeditAreaText_c0, &_call_f_preeditAreaText_c0);
  methods += new qt_gsi::GenericMethod ("previousCursorPosition", "@brief Method int QTextLayout::previousCursorPosition(int oldPos, QTextLayout::CursorMode mode)\n", true, &_init_f_previousCursorPosition_c3378, &_call_f_previousCursorPosition_c3378);
  methods += new qt_gsi::GenericMethod ("setAdditionalFormats|additionalFormats=", "@brief Method void QTextLayout::setAdditionalFormats(const QList<QTextLayout::FormatRange> &overrides)\n", false, &_init_f_setAdditionalFormats_4294, &_call_f_setAdditionalFormats_4294);
  methods += new qt_gsi::GenericMethod ("setCacheEnabled|cacheEnabled=", "@brief Method void QTextLayout::setCacheEnabled(bool enable)\n", false, &_init_f_setCacheEnabled_864, &_call_f_setCacheEnabled_864);
  methods += new qt_gsi::GenericMethod ("setFlags", "@brief Method void QTextLayout::setFlags(int flags)\n", false, &_init_f_setFlags_767, &_call_f_setFlags_767);
  methods += new qt_gsi::GenericMethod ("setFont|font=", "@brief Method void QTextLayout::setFont(const QFont &f)\n", false, &_init_f_setFont_1801, &_call_f_setFont_1801);
  methods += new qt_gsi::GenericMethod ("setPosition|position=", "@brief Method void QTextLayout::setPosition(const QPointF &p)\n", false, &_init_f_setPosition_1986, &_call_f_setPosition_1986);
  methods += new qt_gsi::GenericMethod ("setPreeditArea", "@brief Method void QTextLayout::setPreeditArea(int position, const QString &text)\n", false, &_init_f_setPreeditArea_2684, &_call_f_setPreeditArea_2684);
  methods += new qt_gsi::GenericMethod ("setText|text=", "@brief Method void QTextLayout::setText(const QString &string)\n", false, &_init_f_setText_2025, &_call_f_setText_2025);
  methods += new qt_gsi::GenericMethod ("setTextOption|textOption=", "@brief Method void QTextLayout::setTextOption(const QTextOption &option)\n", false, &_init_f_setTextOption_2448, &_call_f_setTextOption_2448);
  methods += new qt_gsi::GenericMethod (":text", "@brief Method QString QTextLayout::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod (":textOption", "@brief Method QTextOption QTextLayout::textOption()\n", true, &_init_f_textOption_c0, &_call_f_textOption_c0);
  return methods;
}

gsi::Class<QTextLayout> decl_QTextLayout ("QtGui", "QTextLayout",
  methods_QTextLayout (),
  "@qt\n@brief Binding of QTextLayout");


GSI_QTGUI_PUBLIC gsi::Class<QTextLayout> &qtdecl_QTextLayout () { return decl_QTextLayout; }

}


//  Implementation of the enum wrapper class for QTextLayout::CursorMode
namespace qt_gsi
{

static gsi::Enum<QTextLayout::CursorMode> decl_QTextLayout_CursorMode_Enum ("QtGui", "QTextLayout_CursorMode",
    gsi::enum_const ("SkipCharacters", QTextLayout::SkipCharacters, "@brief Enum constant QTextLayout::SkipCharacters") +
    gsi::enum_const ("SkipWords", QTextLayout::SkipWords, "@brief Enum constant QTextLayout::SkipWords"),
  "@qt\n@brief This class represents the QTextLayout::CursorMode enum");

static gsi::QFlagsClass<QTextLayout::CursorMode > decl_QTextLayout_CursorMode_Enums ("QtGui", "QTextLayout_QFlags_CursorMode",
  "@qt\n@brief This class represents the QFlags<QTextLayout::CursorMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextLayout> inject_QTextLayout_CursorMode_Enum_in_parent (decl_QTextLayout_CursorMode_Enum.defs ());
static gsi::ClassExt<QTextLayout> decl_QTextLayout_CursorMode_Enum_as_child (decl_QTextLayout_CursorMode_Enum, "CursorMode");
static gsi::ClassExt<QTextLayout> decl_QTextLayout_CursorMode_Enums_as_child (decl_QTextLayout_CursorMode_Enums, "QFlags_CursorMode");

}

