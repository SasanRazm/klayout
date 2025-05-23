
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
*  @file gsiDeclQSslCertificate.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslCertificate>
#include <QDateTime>
#include <QIODevice>
#include <QSslKey>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslCertificate

//  Constructor QSslCertificate::QSslCertificate(QIODevice *device, QSsl::EncodingFormat format)


static void _init_ctor_QSslCertificate_3702 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_1);
  decl->set_return_new<QSslCertificate> ();
}

static void _call_ctor_QSslCertificate_3702 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  ret.write<QSslCertificate *> (new QSslCertificate (arg1, qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg2).cref()));
}


//  Constructor QSslCertificate::QSslCertificate(const QByteArray &encoded, QSsl::EncodingFormat format)


static void _init_ctor_QSslCertificate_4564 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoded", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_1);
  decl->set_return_new<QSslCertificate> ();
}

static void _call_ctor_QSslCertificate_4564 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  ret.write<QSslCertificate *> (new QSslCertificate (arg1, qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg2).cref()));
}


//  Constructor QSslCertificate::QSslCertificate(const QSslCertificate &other)


static void _init_ctor_QSslCertificate_2823 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslCertificate & > (argspec_0);
  decl->set_return_new<QSslCertificate> ();
}

static void _call_ctor_QSslCertificate_2823 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificate &arg1 = gsi::arg_reader<const QSslCertificate & >() (args, heap);
  ret.write<QSslCertificate *> (new QSslCertificate (arg1));
}


// void QSslCertificate::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslCertificate *)cls)->clear ();
}


// QByteArray QSslCertificate::digest(QCryptographicHash::Algorithm algorithm)


static void _init_f_digest_c3331 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("algorithm", true, "QCryptographicHash::Md5");
  decl->add_arg<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_digest_c3331 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QCryptographicHash::Algorithm>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QCryptographicHash::Algorithm>(heap, QCryptographicHash::Md5), heap);
  ret.write<QByteArray > ((QByteArray)((QSslCertificate *)cls)->digest (qt_gsi::QtToCppAdaptor<QCryptographicHash::Algorithm>(arg1).cref()));
}


// QDateTime QSslCertificate::effectiveDate()


static void _init_f_effectiveDate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_effectiveDate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QSslCertificate *)cls)->effectiveDate ());
}


// QDateTime QSslCertificate::expiryDate()


static void _init_f_expiryDate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_expiryDate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QSslCertificate *)cls)->expiryDate ());
}


// Qt::HANDLE QSslCertificate::handle()


static void _init_f_handle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<Qt::HANDLE > ();
}

static void _call_f_handle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<Qt::HANDLE > ((Qt::HANDLE)((QSslCertificate *)cls)->handle ());
}


// bool QSslCertificate::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslCertificate *)cls)->isNull ());
}


// bool QSslCertificate::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslCertificate *)cls)->isValid ());
}


// QString QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo info)


static void _init_f_issuerInfo_c3178 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const qt_gsi::Converter<QSslCertificate::SubjectInfo>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_issuerInfo_c3178 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSslCertificate::SubjectInfo>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSslCertificate::SubjectInfo>::target_type & >() (args, heap);
  ret.write<QString > ((QString)((QSslCertificate *)cls)->issuerInfo (qt_gsi::QtToCppAdaptor<QSslCertificate::SubjectInfo>(arg1).cref()));
}


// QString QSslCertificate::issuerInfo(const QByteArray &tag)


static void _init_f_issuerInfo_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tag");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_issuerInfo_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QString > ((QString)((QSslCertificate *)cls)->issuerInfo (arg1));
}


// bool QSslCertificate::operator!=(const QSslCertificate &other)


static void _init_f_operator_excl__eq__c2823 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslCertificate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2823 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificate &arg1 = gsi::arg_reader<const QSslCertificate & >() (args, heap);
  ret.write<bool > ((bool)((QSslCertificate *)cls)->operator!= (arg1));
}


// QSslCertificate &QSslCertificate::operator=(const QSslCertificate &other)


static void _init_f_operator_eq__2823 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslCertificate & > (argspec_0);
  decl->set_return<QSslCertificate & > ();
}

static void _call_f_operator_eq__2823 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificate &arg1 = gsi::arg_reader<const QSslCertificate & >() (args, heap);
  ret.write<QSslCertificate & > ((QSslCertificate &)((QSslCertificate *)cls)->operator= (arg1));
}


// bool QSslCertificate::operator==(const QSslCertificate &other)


static void _init_f_operator_eq__eq__c2823 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslCertificate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2823 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslCertificate &arg1 = gsi::arg_reader<const QSslCertificate & >() (args, heap);
  ret.write<bool > ((bool)((QSslCertificate *)cls)->operator== (arg1));
}


// QSslKey QSslCertificate::publicKey()


static void _init_f_publicKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslKey > ();
}

static void _call_f_publicKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslKey > ((QSslKey)((QSslCertificate *)cls)->publicKey ());
}


// QByteArray QSslCertificate::serialNumber()


static void _init_f_serialNumber_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_serialNumber_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslCertificate *)cls)->serialNumber ());
}


// QString QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo info)


static void _init_f_subjectInfo_c3178 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("info");
  decl->add_arg<const qt_gsi::Converter<QSslCertificate::SubjectInfo>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_subjectInfo_c3178 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSslCertificate::SubjectInfo>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QSslCertificate::SubjectInfo>::target_type & >() (args, heap);
  ret.write<QString > ((QString)((QSslCertificate *)cls)->subjectInfo (qt_gsi::QtToCppAdaptor<QSslCertificate::SubjectInfo>(arg1).cref()));
}


// QString QSslCertificate::subjectInfo(const QByteArray &tag)


static void _init_f_subjectInfo_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("tag");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_subjectInfo_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QString > ((QString)((QSslCertificate *)cls)->subjectInfo (arg1));
}


// QByteArray QSslCertificate::toDer()


static void _init_f_toDer_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_toDer_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslCertificate *)cls)->toDer ());
}


// QByteArray QSslCertificate::toPem()


static void _init_f_toPem_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_toPem_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslCertificate *)cls)->toPem ());
}


// QByteArray QSslCertificate::version()


static void _init_f_version_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_version_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslCertificate *)cls)->version ());
}


// static QList<QSslCertificate> QSslCertificate::fromData(const QByteArray &data, QSsl::EncodingFormat format)


static void _init_f_fromData_4564 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_1);
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_fromData_4564 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)QSslCertificate::fromData (arg1, qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg2).cref()));
}


// static QList<QSslCertificate> QSslCertificate::fromDevice(QIODevice *device, QSsl::EncodingFormat format)


static void _init_f_fromDevice_3702 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_1);
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_fromDevice_3702 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)QSslCertificate::fromDevice (arg1, qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg2).cref()));
}


// static QList<QSslCertificate> QSslCertificate::fromPath(const QString &path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax)


static void _init_f_fromPath_6773 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("path");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("syntax", true, "QRegExp::FixedString");
  decl->add_arg<const qt_gsi::Converter<QRegExp::PatternSyntax>::target_type & > (argspec_2);
  decl->set_return<QList<QSslCertificate> > ();
}

static void _call_f_fromPath_6773 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  const qt_gsi::Converter<QRegExp::PatternSyntax>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QRegExp::PatternSyntax>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QRegExp::PatternSyntax>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QRegExp::PatternSyntax>(heap, QRegExp::FixedString), heap);
  ret.write<QList<QSslCertificate> > ((QList<QSslCertificate>)QSslCertificate::fromPath (arg1, qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg2).cref(), qt_gsi::QtToCppAdaptor<QRegExp::PatternSyntax>(arg3).cref()));
}



namespace gsi
{

static gsi::Methods methods_QSslCertificate () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslCertificate::QSslCertificate(QIODevice *device, QSsl::EncodingFormat format)\nThis method creates an object of class QSslCertificate.", &_init_ctor_QSslCertificate_3702, &_call_ctor_QSslCertificate_3702);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslCertificate::QSslCertificate(const QByteArray &encoded, QSsl::EncodingFormat format)\nThis method creates an object of class QSslCertificate.", &_init_ctor_QSslCertificate_4564, &_call_ctor_QSslCertificate_4564);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslCertificate::QSslCertificate(const QSslCertificate &other)\nThis method creates an object of class QSslCertificate.", &_init_ctor_QSslCertificate_2823, &_call_ctor_QSslCertificate_2823);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QSslCertificate::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("digest", "@brief Method QByteArray QSslCertificate::digest(QCryptographicHash::Algorithm algorithm)\n", true, &_init_f_digest_c3331, &_call_f_digest_c3331);
  methods += new qt_gsi::GenericMethod ("effectiveDate", "@brief Method QDateTime QSslCertificate::effectiveDate()\n", true, &_init_f_effectiveDate_c0, &_call_f_effectiveDate_c0);
  methods += new qt_gsi::GenericMethod ("expiryDate", "@brief Method QDateTime QSslCertificate::expiryDate()\n", true, &_init_f_expiryDate_c0, &_call_f_expiryDate_c0);
  methods += new qt_gsi::GenericMethod ("handle", "@brief Method Qt::HANDLE QSslCertificate::handle()\n", true, &_init_f_handle_c0, &_call_f_handle_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSslCertificate::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSslCertificate::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("issuerInfo", "@brief Method QString QSslCertificate::issuerInfo(QSslCertificate::SubjectInfo info)\n", true, &_init_f_issuerInfo_c3178, &_call_f_issuerInfo_c3178);
  methods += new qt_gsi::GenericMethod ("issuerInfo", "@brief Method QString QSslCertificate::issuerInfo(const QByteArray &tag)\n", true, &_init_f_issuerInfo_c2309, &_call_f_issuerInfo_c2309);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSslCertificate::operator!=(const QSslCertificate &other)\n", true, &_init_f_operator_excl__eq__c2823, &_call_f_operator_excl__eq__c2823);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSslCertificate &QSslCertificate::operator=(const QSslCertificate &other)\n", false, &_init_f_operator_eq__2823, &_call_f_operator_eq__2823);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSslCertificate::operator==(const QSslCertificate &other)\n", true, &_init_f_operator_eq__eq__c2823, &_call_f_operator_eq__eq__c2823);
  methods += new qt_gsi::GenericMethod ("publicKey", "@brief Method QSslKey QSslCertificate::publicKey()\n", true, &_init_f_publicKey_c0, &_call_f_publicKey_c0);
  methods += new qt_gsi::GenericMethod ("serialNumber", "@brief Method QByteArray QSslCertificate::serialNumber()\n", true, &_init_f_serialNumber_c0, &_call_f_serialNumber_c0);
  methods += new qt_gsi::GenericMethod ("subjectInfo", "@brief Method QString QSslCertificate::subjectInfo(QSslCertificate::SubjectInfo info)\n", true, &_init_f_subjectInfo_c3178, &_call_f_subjectInfo_c3178);
  methods += new qt_gsi::GenericMethod ("subjectInfo", "@brief Method QString QSslCertificate::subjectInfo(const QByteArray &tag)\n", true, &_init_f_subjectInfo_c2309, &_call_f_subjectInfo_c2309);
  methods += new qt_gsi::GenericMethod ("toDer", "@brief Method QByteArray QSslCertificate::toDer()\n", true, &_init_f_toDer_c0, &_call_f_toDer_c0);
  methods += new qt_gsi::GenericMethod ("toPem", "@brief Method QByteArray QSslCertificate::toPem()\n", true, &_init_f_toPem_c0, &_call_f_toPem_c0);
  methods += new qt_gsi::GenericMethod ("version", "@brief Method QByteArray QSslCertificate::version()\n", true, &_init_f_version_c0, &_call_f_version_c0);
  methods += new qt_gsi::GenericStaticMethod ("fromData", "@brief Static method QList<QSslCertificate> QSslCertificate::fromData(const QByteArray &data, QSsl::EncodingFormat format)\nThis method is static and can be called without an instance.", &_init_f_fromData_4564, &_call_f_fromData_4564);
  methods += new qt_gsi::GenericStaticMethod ("fromDevice", "@brief Static method QList<QSslCertificate> QSslCertificate::fromDevice(QIODevice *device, QSsl::EncodingFormat format)\nThis method is static and can be called without an instance.", &_init_f_fromDevice_3702, &_call_f_fromDevice_3702);
  methods += new qt_gsi::GenericStaticMethod ("fromPath", "@brief Static method QList<QSslCertificate> QSslCertificate::fromPath(const QString &path, QSsl::EncodingFormat format, QRegExp::PatternSyntax syntax)\nThis method is static and can be called without an instance.", &_init_f_fromPath_6773, &_call_f_fromPath_6773);
  return methods;
}

gsi::Class<QSslCertificate> decl_QSslCertificate ("QtNetwork", "QSslCertificate",
  methods_QSslCertificate (),
  "@qt\n@brief Binding of QSslCertificate");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslCertificate> &qtdecl_QSslCertificate () { return decl_QSslCertificate; }

}


//  Implementation of the enum wrapper class for QSslCertificate::SubjectInfo
namespace qt_gsi
{

static gsi::Enum<QSslCertificate::SubjectInfo> decl_QSslCertificate_SubjectInfo_Enum ("QtNetwork", "QSslCertificate_SubjectInfo",
    gsi::enum_const ("Organization", QSslCertificate::Organization, "@brief Enum constant QSslCertificate::Organization") +
    gsi::enum_const ("CommonName", QSslCertificate::CommonName, "@brief Enum constant QSslCertificate::CommonName") +
    gsi::enum_const ("LocalityName", QSslCertificate::LocalityName, "@brief Enum constant QSslCertificate::LocalityName") +
    gsi::enum_const ("OrganizationalUnitName", QSslCertificate::OrganizationalUnitName, "@brief Enum constant QSslCertificate::OrganizationalUnitName") +
    gsi::enum_const ("CountryName", QSslCertificate::CountryName, "@brief Enum constant QSslCertificate::CountryName") +
    gsi::enum_const ("StateOrProvinceName", QSslCertificate::StateOrProvinceName, "@brief Enum constant QSslCertificate::StateOrProvinceName"),
  "@qt\n@brief This class represents the QSslCertificate::SubjectInfo enum");

static gsi::QFlagsClass<QSslCertificate::SubjectInfo > decl_QSslCertificate_SubjectInfo_Enums ("QtNetwork", "QSslCertificate_QFlags_SubjectInfo",
  "@qt\n@brief This class represents the QFlags<QSslCertificate::SubjectInfo> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSslCertificate> inject_QSslCertificate_SubjectInfo_Enum_in_parent (decl_QSslCertificate_SubjectInfo_Enum.defs ());
static gsi::ClassExt<QSslCertificate> decl_QSslCertificate_SubjectInfo_Enum_as_child (decl_QSslCertificate_SubjectInfo_Enum, "SubjectInfo");
static gsi::ClassExt<QSslCertificate> decl_QSslCertificate_SubjectInfo_Enums_as_child (decl_QSslCertificate_SubjectInfo_Enums, "QFlags_SubjectInfo");

}

