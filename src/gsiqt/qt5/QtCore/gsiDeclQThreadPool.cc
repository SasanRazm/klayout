
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
*  @file gsiDeclQThreadPool.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QThreadPool>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QRunnable>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QThreadPool

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QThreadPool::staticMetaObject);
}


// int QThreadPool::activeThreadCount()


static void _init_f_activeThreadCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_activeThreadCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QThreadPool *)cls)->activeThreadCount ());
}


// void QThreadPool::cancel(QRunnable *runnable)


static void _init_f_cancel_1526 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("runnable");
  decl->add_arg<QRunnable * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_cancel_1526 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRunnable *arg1 = gsi::arg_reader<QRunnable * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->cancel (arg1);
}


// void QThreadPool::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->clear ();
}


// int QThreadPool::expiryTimeout()


static void _init_f_expiryTimeout_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_expiryTimeout_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QThreadPool *)cls)->expiryTimeout ());
}


// int QThreadPool::maxThreadCount()


static void _init_f_maxThreadCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_maxThreadCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QThreadPool *)cls)->maxThreadCount ());
}


// void QThreadPool::releaseThread()


static void _init_f_releaseThread_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_releaseThread_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->releaseThread ();
}


// void QThreadPool::reserveThread()


static void _init_f_reserveThread_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reserveThread_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->reserveThread ();
}


// void QThreadPool::setExpiryTimeout(int expiryTimeout)


static void _init_f_setExpiryTimeout_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("expiryTimeout");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setExpiryTimeout_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->setExpiryTimeout (arg1);
}


// void QThreadPool::setMaxThreadCount(int maxThreadCount)


static void _init_f_setMaxThreadCount_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maxThreadCount");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMaxThreadCount_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->setMaxThreadCount (arg1);
}


// void QThreadPool::setStackSize(unsigned int stackSize)


static void _init_f_setStackSize_1772 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("stackSize");
  decl->add_arg<unsigned int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStackSize_1772 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = gsi::arg_reader<unsigned int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->setStackSize (arg1);
}


// unsigned int QThreadPool::stackSize()


static void _init_f_stackSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<unsigned int > ();
}

static void _call_f_stackSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<unsigned int > ((unsigned int)((QThreadPool *)cls)->stackSize ());
}


// void QThreadPool::start(QRunnable *runnable, int priority)


static void _init_f_start_2185 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("runnable");
  decl->add_arg<QRunnable * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("priority", true, "0");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_start_2185 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRunnable *arg1 = gsi::arg_reader<QRunnable * >() (args, heap);
  int arg2 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool *)cls)->start (arg1, arg2);
}


// bool QThreadPool::tryStart(QRunnable *runnable)


static void _init_f_tryStart_1526 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("runnable");
  decl->add_arg<QRunnable * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryStart_1526 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRunnable *arg1 = gsi::arg_reader<QRunnable * >() (args, heap);
  ret.write<bool > ((bool)((QThreadPool *)cls)->tryStart (arg1));
}


// bool QThreadPool::tryTake(QRunnable *runnable)


static void _init_f_tryTake_1526 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("runnable");
  decl->add_arg<QRunnable * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryTake_1526 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRunnable *arg1 = gsi::arg_reader<QRunnable * >() (args, heap);
  ret.write<bool > ((bool)((QThreadPool *)cls)->tryTake (arg1));
}


// bool QThreadPool::waitForDone(int msecs)


static void _init_f_waitForDone_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs", true, "-1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForDone_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<bool > ((bool)((QThreadPool *)cls)->waitForDone (arg1));
}


// static QThreadPool *QThreadPool::globalInstance()


static void _init_f_globalInstance_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QThreadPool * > ();
}

static void _call_f_globalInstance_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QThreadPool * > ((QThreadPool *)QThreadPool::globalInstance ());
}


// static QString QThreadPool::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QThreadPool::tr (arg1, arg2, arg3));
}


// static QString QThreadPool::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QThreadPool::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QThreadPool () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":activeThreadCount", "@brief Method int QThreadPool::activeThreadCount()\n", true, &_init_f_activeThreadCount_c0, &_call_f_activeThreadCount_c0);
  methods += new qt_gsi::GenericMethod ("cancel", "@brief Method void QThreadPool::cancel(QRunnable *runnable)\n", false, &_init_f_cancel_1526, &_call_f_cancel_1526);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QThreadPool::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod (":expiryTimeout", "@brief Method int QThreadPool::expiryTimeout()\n", true, &_init_f_expiryTimeout_c0, &_call_f_expiryTimeout_c0);
  methods += new qt_gsi::GenericMethod (":maxThreadCount", "@brief Method int QThreadPool::maxThreadCount()\n", true, &_init_f_maxThreadCount_c0, &_call_f_maxThreadCount_c0);
  methods += new qt_gsi::GenericMethod ("releaseThread", "@brief Method void QThreadPool::releaseThread()\n", false, &_init_f_releaseThread_0, &_call_f_releaseThread_0);
  methods += new qt_gsi::GenericMethod ("reserveThread", "@brief Method void QThreadPool::reserveThread()\n", false, &_init_f_reserveThread_0, &_call_f_reserveThread_0);
  methods += new qt_gsi::GenericMethod ("setExpiryTimeout|expiryTimeout=", "@brief Method void QThreadPool::setExpiryTimeout(int expiryTimeout)\n", false, &_init_f_setExpiryTimeout_767, &_call_f_setExpiryTimeout_767);
  methods += new qt_gsi::GenericMethod ("setMaxThreadCount|maxThreadCount=", "@brief Method void QThreadPool::setMaxThreadCount(int maxThreadCount)\n", false, &_init_f_setMaxThreadCount_767, &_call_f_setMaxThreadCount_767);
  methods += new qt_gsi::GenericMethod ("setStackSize|stackSize=", "@brief Method void QThreadPool::setStackSize(unsigned int stackSize)\n", false, &_init_f_setStackSize_1772, &_call_f_setStackSize_1772);
  methods += new qt_gsi::GenericMethod (":stackSize", "@brief Method unsigned int QThreadPool::stackSize()\n", true, &_init_f_stackSize_c0, &_call_f_stackSize_c0);
  methods += new qt_gsi::GenericMethod ("start", "@brief Method void QThreadPool::start(QRunnable *runnable, int priority)\n", false, &_init_f_start_2185, &_call_f_start_2185);
  methods += new qt_gsi::GenericMethod ("tryStart", "@brief Method bool QThreadPool::tryStart(QRunnable *runnable)\n", false, &_init_f_tryStart_1526, &_call_f_tryStart_1526);
  methods += new qt_gsi::GenericMethod ("tryTake", "@brief Method bool QThreadPool::tryTake(QRunnable *runnable)\n", false, &_init_f_tryTake_1526, &_call_f_tryTake_1526);
  methods += new qt_gsi::GenericMethod ("waitForDone", "@brief Method bool QThreadPool::waitForDone(int msecs)\n", false, &_init_f_waitForDone_767, &_call_f_waitForDone_767);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QThreadPool::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QThreadPool::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("globalInstance", "@brief Static method QThreadPool *QThreadPool::globalInstance()\nThis method is static and can be called without an instance.", &_init_f_globalInstance_0, &_call_f_globalInstance_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QThreadPool::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QThreadPool::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QThreadPool> decl_QThreadPool (qtdecl_QObject (), "QtCore", "QThreadPool_Native",
  methods_QThreadPool (),
  "@hide\n@alias QThreadPool");

GSI_QTCORE_PUBLIC gsi::Class<QThreadPool> &qtdecl_QThreadPool () { return decl_QThreadPool; }

}


class QThreadPool_Adaptor : public QThreadPool, public qt_gsi::QtObjectBase
{
public:

  virtual ~QThreadPool_Adaptor();

  //  [adaptor ctor] QThreadPool::QThreadPool(QObject *parent)
  QThreadPool_Adaptor() : QThreadPool()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QThreadPool::QThreadPool(QObject *parent)
  QThreadPool_Adaptor(QObject *parent) : QThreadPool(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QThreadPool::isSignalConnected(const QMetaMethod &signal)
  bool fp_QThreadPool_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QThreadPool::isSignalConnected(signal);
  }

  //  [expose] int QThreadPool::receivers(const char *signal)
  int fp_QThreadPool_receivers_c1731 (const char *signal) const {
    return QThreadPool::receivers(signal);
  }

  //  [expose] QObject *QThreadPool::sender()
  QObject * fp_QThreadPool_sender_c0 () const {
    return QThreadPool::sender();
  }

  //  [expose] int QThreadPool::senderSignalIndex()
  int fp_QThreadPool_senderSignalIndex_c0 () const {
    return QThreadPool::senderSignalIndex();
  }

  //  [emitter impl] void QThreadPool::destroyed(QObject *)
  void emitter_QThreadPool_destroyed_1302(QObject *arg1)
  {
    emit QThreadPool::destroyed(arg1);
  }

  //  [adaptor impl] bool QThreadPool::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QThreadPool::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QThreadPool_Adaptor, bool, QEvent *>(&QThreadPool_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QThreadPool::event(_event);
    }
  }

  //  [adaptor impl] bool QThreadPool::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QThreadPool::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QThreadPool_Adaptor, bool, QObject *, QEvent *>(&QThreadPool_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QThreadPool::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QThreadPool::objectNameChanged(const QString &objectName)
  void emitter_QThreadPool_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QThreadPool::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QThreadPool::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QThreadPool::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QThreadPool_Adaptor, QChildEvent *>(&QThreadPool_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QThreadPool::childEvent(event);
    }
  }

  //  [adaptor impl] void QThreadPool::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QThreadPool::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QThreadPool_Adaptor, QEvent *>(&QThreadPool_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QThreadPool::customEvent(event);
    }
  }

  //  [adaptor impl] void QThreadPool::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QThreadPool::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QThreadPool_Adaptor, const QMetaMethod &>(&QThreadPool_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QThreadPool::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QThreadPool::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QThreadPool::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QThreadPool_Adaptor, QTimerEvent *>(&QThreadPool_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QThreadPool::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QThreadPool_Adaptor::~QThreadPool_Adaptor() { }

//  Constructor QThreadPool::QThreadPool(QObject *parent) (adaptor class)

static void _init_ctor_QThreadPool_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QThreadPool_Adaptor> ();
}

static void _call_ctor_QThreadPool_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QThreadPool_Adaptor *> (new QThreadPool_Adaptor (arg1));
}


// void QThreadPool::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QThreadPool_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QThreadPool::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QThreadPool_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QThreadPool::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QThreadPool_Adaptor *)cls)->emitter_QThreadPool_destroyed_1302 (arg1);
}


// void QThreadPool::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QThreadPool_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QThreadPool::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QThreadPool_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QThreadPool_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QThreadPool::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QThreadPool_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QThreadPool_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QThreadPool::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QThreadPool_Adaptor *)cls)->fp_QThreadPool_isSignalConnected_c2394 (arg1));
}


// emitter void QThreadPool::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QThreadPool_Adaptor *)cls)->emitter_QThreadPool_objectNameChanged_4567 (arg1);
}


// exposed int QThreadPool::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QThreadPool_Adaptor *)cls)->fp_QThreadPool_receivers_c1731 (arg1));
}


// exposed QObject *QThreadPool::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QThreadPool_Adaptor *)cls)->fp_QThreadPool_sender_c0 ());
}


// exposed int QThreadPool::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QThreadPool_Adaptor *)cls)->fp_QThreadPool_senderSignalIndex_c0 ());
}


// void QThreadPool::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QThreadPool_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QThreadPool_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QThreadPool> &qtdecl_QThreadPool ();

static gsi::Methods methods_QThreadPool_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QThreadPool::QThreadPool(QObject *parent)\nThis method creates an object of class QThreadPool.", &_init_ctor_QThreadPool_Adaptor_1302, &_call_ctor_QThreadPool_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QThreadPool::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QThreadPool::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QThreadPool::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QThreadPool::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QThreadPool::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QThreadPool::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QThreadPool::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QThreadPool::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QThreadPool::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QThreadPool::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QThreadPool::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QThreadPool::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QThreadPool_Adaptor> decl_QThreadPool_Adaptor (qtdecl_QThreadPool (), "QtCore", "QThreadPool",
  methods_QThreadPool_Adaptor (),
  "@qt\n@brief Binding of QThreadPool");

}

