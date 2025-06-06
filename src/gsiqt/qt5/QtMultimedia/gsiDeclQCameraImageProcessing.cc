
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
*  @file gsiDeclQCameraImageProcessing.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraImageProcessing>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraImageProcessing

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraImageProcessing::staticMetaObject);
}


// double QCameraImageProcessing::brightness()


static void _init_f_brightness_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_brightness_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraImageProcessing *)cls)->brightness ());
}


// QCameraImageProcessing::ColorFilter QCameraImageProcessing::colorFilter()


static void _init_f_colorFilter_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type > ();
}

static void _call_f_colorFilter_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type > ((qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type)qt_gsi::CppToQtAdaptor<QCameraImageProcessing::ColorFilter>(((QCameraImageProcessing *)cls)->colorFilter ()));
}


// double QCameraImageProcessing::contrast()


static void _init_f_contrast_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_contrast_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraImageProcessing *)cls)->contrast ());
}


// double QCameraImageProcessing::denoisingLevel()


static void _init_f_denoisingLevel_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_denoisingLevel_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraImageProcessing *)cls)->denoisingLevel ());
}


// bool QCameraImageProcessing::isAvailable()


static void _init_f_isAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraImageProcessing *)cls)->isAvailable ());
}


// bool QCameraImageProcessing::isColorFilterSupported(QCameraImageProcessing::ColorFilter filter)


static void _init_f_isColorFilterSupported_c3879 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filter");
  decl->add_arg<const qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isColorFilterSupported_c3879 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QCameraImageProcessing *)cls)->isColorFilterSupported (qt_gsi::QtToCppAdaptor<QCameraImageProcessing::ColorFilter>(arg1).cref()));
}


// bool QCameraImageProcessing::isWhiteBalanceModeSupported(QCameraImageProcessing::WhiteBalanceMode mode)


static void _init_f_isWhiteBalanceModeSupported_c4334 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isWhiteBalanceModeSupported_c4334 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QCameraImageProcessing *)cls)->isWhiteBalanceModeSupported (qt_gsi::QtToCppAdaptor<QCameraImageProcessing::WhiteBalanceMode>(arg1).cref()));
}


// double QCameraImageProcessing::manualWhiteBalance()


static void _init_f_manualWhiteBalance_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_manualWhiteBalance_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraImageProcessing *)cls)->manualWhiteBalance ());
}


// double QCameraImageProcessing::saturation()


static void _init_f_saturation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_saturation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraImageProcessing *)cls)->saturation ());
}


// void QCameraImageProcessing::setBrightness(double value)


static void _init_f_setBrightness_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBrightness_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setBrightness (arg1);
}


// void QCameraImageProcessing::setColorFilter(QCameraImageProcessing::ColorFilter filter)


static void _init_f_setColorFilter_3879 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filter");
  decl->add_arg<const qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColorFilter_3879 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCameraImageProcessing::ColorFilter>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setColorFilter (qt_gsi::QtToCppAdaptor<QCameraImageProcessing::ColorFilter>(arg1).cref());
}


// void QCameraImageProcessing::setContrast(double value)


static void _init_f_setContrast_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContrast_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setContrast (arg1);
}


// void QCameraImageProcessing::setDenoisingLevel(double value)


static void _init_f_setDenoisingLevel_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDenoisingLevel_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setDenoisingLevel (arg1);
}


// void QCameraImageProcessing::setManualWhiteBalance(double colorTemperature)


static void _init_f_setManualWhiteBalance_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colorTemperature");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setManualWhiteBalance_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setManualWhiteBalance (arg1);
}


// void QCameraImageProcessing::setSaturation(double value)


static void _init_f_setSaturation_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSaturation_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setSaturation (arg1);
}


// void QCameraImageProcessing::setSharpeningLevel(double value)


static void _init_f_setSharpeningLevel_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("value");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSharpeningLevel_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setSharpeningLevel (arg1);
}


// void QCameraImageProcessing::setWhiteBalanceMode(QCameraImageProcessing::WhiteBalanceMode mode)


static void _init_f_setWhiteBalanceMode_4334 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWhiteBalanceMode_4334 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraImageProcessing *)cls)->setWhiteBalanceMode (qt_gsi::QtToCppAdaptor<QCameraImageProcessing::WhiteBalanceMode>(arg1).cref());
}


// double QCameraImageProcessing::sharpeningLevel()


static void _init_f_sharpeningLevel_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_sharpeningLevel_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QCameraImageProcessing *)cls)->sharpeningLevel ());
}


// QCameraImageProcessing::WhiteBalanceMode QCameraImageProcessing::whiteBalanceMode()


static void _init_f_whiteBalanceMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type > ();
}

static void _call_f_whiteBalanceMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type > ((qt_gsi::Converter<QCameraImageProcessing::WhiteBalanceMode>::target_type)qt_gsi::CppToQtAdaptor<QCameraImageProcessing::WhiteBalanceMode>(((QCameraImageProcessing *)cls)->whiteBalanceMode ()));
}


// static QString QCameraImageProcessing::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraImageProcessing::tr (arg1, arg2, arg3));
}


// static QString QCameraImageProcessing::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraImageProcessing::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QCameraImageProcessing () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":brightness", "@brief Method double QCameraImageProcessing::brightness()\n", true, &_init_f_brightness_c0, &_call_f_brightness_c0);
  methods += new qt_gsi::GenericMethod (":colorFilter", "@brief Method QCameraImageProcessing::ColorFilter QCameraImageProcessing::colorFilter()\n", true, &_init_f_colorFilter_c0, &_call_f_colorFilter_c0);
  methods += new qt_gsi::GenericMethod (":contrast", "@brief Method double QCameraImageProcessing::contrast()\n", true, &_init_f_contrast_c0, &_call_f_contrast_c0);
  methods += new qt_gsi::GenericMethod (":denoisingLevel", "@brief Method double QCameraImageProcessing::denoisingLevel()\n", true, &_init_f_denoisingLevel_c0, &_call_f_denoisingLevel_c0);
  methods += new qt_gsi::GenericMethod ("isAvailable?", "@brief Method bool QCameraImageProcessing::isAvailable()\n", true, &_init_f_isAvailable_c0, &_call_f_isAvailable_c0);
  methods += new qt_gsi::GenericMethod ("isColorFilterSupported?", "@brief Method bool QCameraImageProcessing::isColorFilterSupported(QCameraImageProcessing::ColorFilter filter)\n", true, &_init_f_isColorFilterSupported_c3879, &_call_f_isColorFilterSupported_c3879);
  methods += new qt_gsi::GenericMethod ("isWhiteBalanceModeSupported?", "@brief Method bool QCameraImageProcessing::isWhiteBalanceModeSupported(QCameraImageProcessing::WhiteBalanceMode mode)\n", true, &_init_f_isWhiteBalanceModeSupported_c4334, &_call_f_isWhiteBalanceModeSupported_c4334);
  methods += new qt_gsi::GenericMethod (":manualWhiteBalance", "@brief Method double QCameraImageProcessing::manualWhiteBalance()\n", true, &_init_f_manualWhiteBalance_c0, &_call_f_manualWhiteBalance_c0);
  methods += new qt_gsi::GenericMethod (":saturation", "@brief Method double QCameraImageProcessing::saturation()\n", true, &_init_f_saturation_c0, &_call_f_saturation_c0);
  methods += new qt_gsi::GenericMethod ("setBrightness|brightness=", "@brief Method void QCameraImageProcessing::setBrightness(double value)\n", false, &_init_f_setBrightness_1071, &_call_f_setBrightness_1071);
  methods += new qt_gsi::GenericMethod ("setColorFilter|colorFilter=", "@brief Method void QCameraImageProcessing::setColorFilter(QCameraImageProcessing::ColorFilter filter)\n", false, &_init_f_setColorFilter_3879, &_call_f_setColorFilter_3879);
  methods += new qt_gsi::GenericMethod ("setContrast|contrast=", "@brief Method void QCameraImageProcessing::setContrast(double value)\n", false, &_init_f_setContrast_1071, &_call_f_setContrast_1071);
  methods += new qt_gsi::GenericMethod ("setDenoisingLevel|denoisingLevel=", "@brief Method void QCameraImageProcessing::setDenoisingLevel(double value)\n", false, &_init_f_setDenoisingLevel_1071, &_call_f_setDenoisingLevel_1071);
  methods += new qt_gsi::GenericMethod ("setManualWhiteBalance|manualWhiteBalance=", "@brief Method void QCameraImageProcessing::setManualWhiteBalance(double colorTemperature)\n", false, &_init_f_setManualWhiteBalance_1071, &_call_f_setManualWhiteBalance_1071);
  methods += new qt_gsi::GenericMethod ("setSaturation|saturation=", "@brief Method void QCameraImageProcessing::setSaturation(double value)\n", false, &_init_f_setSaturation_1071, &_call_f_setSaturation_1071);
  methods += new qt_gsi::GenericMethod ("setSharpeningLevel|sharpeningLevel=", "@brief Method void QCameraImageProcessing::setSharpeningLevel(double value)\n", false, &_init_f_setSharpeningLevel_1071, &_call_f_setSharpeningLevel_1071);
  methods += new qt_gsi::GenericMethod ("setWhiteBalanceMode|whiteBalanceMode=", "@brief Method void QCameraImageProcessing::setWhiteBalanceMode(QCameraImageProcessing::WhiteBalanceMode mode)\n", false, &_init_f_setWhiteBalanceMode_4334, &_call_f_setWhiteBalanceMode_4334);
  methods += new qt_gsi::GenericMethod (":sharpeningLevel", "@brief Method double QCameraImageProcessing::sharpeningLevel()\n", true, &_init_f_sharpeningLevel_c0, &_call_f_sharpeningLevel_c0);
  methods += new qt_gsi::GenericMethod (":whiteBalanceMode", "@brief Method QCameraImageProcessing::WhiteBalanceMode QCameraImageProcessing::whiteBalanceMode()\n", true, &_init_f_whiteBalanceMode_c0, &_call_f_whiteBalanceMode_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QCameraImageProcessing::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QCameraImageProcessing::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraImageProcessing::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraImageProcessing::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QCameraImageProcessing> decl_QCameraImageProcessing (qtdecl_QObject (), "QtMultimedia", "QCameraImageProcessing",
  methods_QCameraImageProcessing (),
  "@qt\n@brief Binding of QCameraImageProcessing");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraImageProcessing> &qtdecl_QCameraImageProcessing () { return decl_QCameraImageProcessing; }

}


//  Implementation of the enum wrapper class for QCameraImageProcessing::ColorFilter
namespace qt_gsi
{

static gsi::Enum<QCameraImageProcessing::ColorFilter> decl_QCameraImageProcessing_ColorFilter_Enum ("QtMultimedia", "QCameraImageProcessing_ColorFilter",
    gsi::enum_const ("ColorFilterNone", QCameraImageProcessing::ColorFilterNone, "@brief Enum constant QCameraImageProcessing::ColorFilterNone") +
    gsi::enum_const ("ColorFilterGrayscale", QCameraImageProcessing::ColorFilterGrayscale, "@brief Enum constant QCameraImageProcessing::ColorFilterGrayscale") +
    gsi::enum_const ("ColorFilterNegative", QCameraImageProcessing::ColorFilterNegative, "@brief Enum constant QCameraImageProcessing::ColorFilterNegative") +
    gsi::enum_const ("ColorFilterSolarize", QCameraImageProcessing::ColorFilterSolarize, "@brief Enum constant QCameraImageProcessing::ColorFilterSolarize") +
    gsi::enum_const ("ColorFilterSepia", QCameraImageProcessing::ColorFilterSepia, "@brief Enum constant QCameraImageProcessing::ColorFilterSepia") +
    gsi::enum_const ("ColorFilterPosterize", QCameraImageProcessing::ColorFilterPosterize, "@brief Enum constant QCameraImageProcessing::ColorFilterPosterize") +
    gsi::enum_const ("ColorFilterWhiteboard", QCameraImageProcessing::ColorFilterWhiteboard, "@brief Enum constant QCameraImageProcessing::ColorFilterWhiteboard") +
    gsi::enum_const ("ColorFilterBlackboard", QCameraImageProcessing::ColorFilterBlackboard, "@brief Enum constant QCameraImageProcessing::ColorFilterBlackboard") +
    gsi::enum_const ("ColorFilterAqua", QCameraImageProcessing::ColorFilterAqua, "@brief Enum constant QCameraImageProcessing::ColorFilterAqua") +
    gsi::enum_const ("ColorFilterVendor", QCameraImageProcessing::ColorFilterVendor, "@brief Enum constant QCameraImageProcessing::ColorFilterVendor"),
  "@qt\n@brief This class represents the QCameraImageProcessing::ColorFilter enum");

static gsi::QFlagsClass<QCameraImageProcessing::ColorFilter > decl_QCameraImageProcessing_ColorFilter_Enums ("QtMultimedia", "QCameraImageProcessing_QFlags_ColorFilter",
  "@qt\n@brief This class represents the QFlags<QCameraImageProcessing::ColorFilter> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCameraImageProcessing> inject_QCameraImageProcessing_ColorFilter_Enum_in_parent (decl_QCameraImageProcessing_ColorFilter_Enum.defs ());
static gsi::ClassExt<QCameraImageProcessing> decl_QCameraImageProcessing_ColorFilter_Enum_as_child (decl_QCameraImageProcessing_ColorFilter_Enum, "ColorFilter");
static gsi::ClassExt<QCameraImageProcessing> decl_QCameraImageProcessing_ColorFilter_Enums_as_child (decl_QCameraImageProcessing_ColorFilter_Enums, "QFlags_ColorFilter");

}


//  Implementation of the enum wrapper class for QCameraImageProcessing::WhiteBalanceMode
namespace qt_gsi
{

static gsi::Enum<QCameraImageProcessing::WhiteBalanceMode> decl_QCameraImageProcessing_WhiteBalanceMode_Enum ("QtMultimedia", "QCameraImageProcessing_WhiteBalanceMode",
    gsi::enum_const ("WhiteBalanceAuto", QCameraImageProcessing::WhiteBalanceAuto, "@brief Enum constant QCameraImageProcessing::WhiteBalanceAuto") +
    gsi::enum_const ("WhiteBalanceManual", QCameraImageProcessing::WhiteBalanceManual, "@brief Enum constant QCameraImageProcessing::WhiteBalanceManual") +
    gsi::enum_const ("WhiteBalanceSunlight", QCameraImageProcessing::WhiteBalanceSunlight, "@brief Enum constant QCameraImageProcessing::WhiteBalanceSunlight") +
    gsi::enum_const ("WhiteBalanceCloudy", QCameraImageProcessing::WhiteBalanceCloudy, "@brief Enum constant QCameraImageProcessing::WhiteBalanceCloudy") +
    gsi::enum_const ("WhiteBalanceShade", QCameraImageProcessing::WhiteBalanceShade, "@brief Enum constant QCameraImageProcessing::WhiteBalanceShade") +
    gsi::enum_const ("WhiteBalanceTungsten", QCameraImageProcessing::WhiteBalanceTungsten, "@brief Enum constant QCameraImageProcessing::WhiteBalanceTungsten") +
    gsi::enum_const ("WhiteBalanceFluorescent", QCameraImageProcessing::WhiteBalanceFluorescent, "@brief Enum constant QCameraImageProcessing::WhiteBalanceFluorescent") +
    gsi::enum_const ("WhiteBalanceFlash", QCameraImageProcessing::WhiteBalanceFlash, "@brief Enum constant QCameraImageProcessing::WhiteBalanceFlash") +
    gsi::enum_const ("WhiteBalanceSunset", QCameraImageProcessing::WhiteBalanceSunset, "@brief Enum constant QCameraImageProcessing::WhiteBalanceSunset") +
    gsi::enum_const ("WhiteBalanceVendor", QCameraImageProcessing::WhiteBalanceVendor, "@brief Enum constant QCameraImageProcessing::WhiteBalanceVendor"),
  "@qt\n@brief This class represents the QCameraImageProcessing::WhiteBalanceMode enum");

static gsi::QFlagsClass<QCameraImageProcessing::WhiteBalanceMode > decl_QCameraImageProcessing_WhiteBalanceMode_Enums ("QtMultimedia", "QCameraImageProcessing_QFlags_WhiteBalanceMode",
  "@qt\n@brief This class represents the QFlags<QCameraImageProcessing::WhiteBalanceMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCameraImageProcessing> inject_QCameraImageProcessing_WhiteBalanceMode_Enum_in_parent (decl_QCameraImageProcessing_WhiteBalanceMode_Enum.defs ());
static gsi::ClassExt<QCameraImageProcessing> decl_QCameraImageProcessing_WhiteBalanceMode_Enum_as_child (decl_QCameraImageProcessing_WhiteBalanceMode_Enum, "WhiteBalanceMode");
static gsi::ClassExt<QCameraImageProcessing> decl_QCameraImageProcessing_WhiteBalanceMode_Enums_as_child (decl_QCameraImageProcessing_WhiteBalanceMode_Enums, "QFlags_WhiteBalanceMode");

}

