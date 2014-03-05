include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = cockcoin-qt
noinst_LIBRARIES = libcockcoinqt.a
SUBDIRS = $(BUILD_TEST_QT)
DIST_SUBDIRS = test

# cockcoin qt core #
QT_TS = \
  locale/cockcoin_ach.ts \
  locale/cockcoin_af_ZA.ts \
  locale/cockcoin_ar.ts \
  locale/cockcoin_be_BY.ts \
  locale/cockcoin_bg.ts \
  locale/cockcoin_bs.ts \
  locale/cockcoin_ca_ES.ts \
  locale/cockcoin_ca.ts \
  locale/cockcoin_ca@valencia.ts \
  locale/cockcoin_cmn.ts \
  locale/cockcoin_cs.ts \
  locale/cockcoin_cy.ts \
  locale/cockcoin_da.ts \
  locale/cockcoin_de_AT.ts \
  locale/cockcoin_de.ts \
  locale/cockcoin_el_GR.ts \
  locale/cockcoin_en.ts \
  locale/cockcoin_eo.ts \
  locale/cockcoin_es_CL.ts \
  locale/cockcoin_es_DO.ts \
  locale/cockcoin_es_MX.ts \
  locale/cockcoin_es.ts \
  locale/cockcoin_es_UY.ts \
  locale/cockcoin_et.ts \
  locale/cockcoin_eu_ES.ts \
  locale/cockcoin_fa_IR.ts \
  locale/cockcoin_fa.ts \
  locale/cockcoin_fi.ts \
  locale/cockcoin_fr_CA.ts \
  locale/cockcoin_fr.ts \
  locale/cockcoin_gl.ts \
  locale/cockcoin_gu_IN.ts \
  locale/cockcoin_he.ts \
  locale/cockcoin_hi_IN.ts \
  locale/cockcoin_hr.ts \
  locale/cockcoin_hu.ts \
  locale/cockcoin_id_ID.ts \
  locale/cockcoin_it.ts \
  locale/cockcoin_ja.ts \
  locale/cockcoin_ka.ts \
  locale/cockcoin_kk_KZ.ts \
  locale/cockcoin_ko_KR.ts \
  locale/cockcoin_ky.ts \
  locale/cockcoin_la.ts \
  locale/cockcoin_lt.ts \
  locale/cockcoin_lv_LV.ts \
  locale/cockcoin_ms_MY.ts \
  locale/cockcoin_nb.ts \
  locale/cockcoin_nl.ts \
  locale/cockcoin_pam.ts \
  locale/cockcoin_pl.ts \
  locale/cockcoin_pt_BR.ts \
  locale/cockcoin_pt_PT.ts \
  locale/cockcoin_ro_RO.ts \
  locale/cockcoin_ru.ts \
  locale/cockcoin_sah.ts \
  locale/cockcoin_sk.ts \
  locale/cockcoin_sl_SI.ts \
  locale/cockcoin_sq.ts \
  locale/cockcoin_sr.ts \
  locale/cockcoin_sv.ts \
  locale/cockcoin_th_TH.ts \
  locale/cockcoin_tr.ts \
  locale/cockcoin_uk.ts \
  locale/cockcoin_ur_PK.ts \
  locale/cockcoin_uz@Cyrl.ts \
  locale/cockcoin_vi.ts \
  locale/cockcoin_vi_VN.ts \
  locale/cockcoin_zh_CN.ts \
  locale/cockcoin_zh_HK.ts \
  locale/cockcoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_cockcoinaddressvalidator.cpp \
  moc_cockcoinamountfield.cpp \
  moc_cockcoingui.cpp \
  moc_cockcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

COCKCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  cockcoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_cockcoin.cpp
QT_QRC = cockcoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

COCKCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  cockcoinaddressvalidator.h \
  cockcoinamountfield.h \
  cockcoingui.h \
  cockcoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/cockcoin.ico \
  res/icons/cockcoin.png \
  res/icons/cockcoin_testnet.ico \
  res/icons/cockcoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

COCKCOIN_QT_CPP = \
  cockcoin.cpp \
  cockcoinaddressvalidator.cpp \
  cockcoinamountfield.cpp \
  cockcoingui.cpp \
  cockcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  signverifymessagedialog.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
COCKCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

COCKCOIN_RC = res/cockcoin-qt-res.rc

libcockcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libcockcoinqt_a_SOURCES = $(COCKCOIN_QT_CPP) $(COCKCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libcockcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libcockcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# cockcoin-qt binary #
cockcoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
cockcoin_qt_SOURCES = cockcoin.cpp
if TARGET_DARWIN
  cockcoin_qt_SOURCES += $(COCKCOIN_MM)
endif
if TARGET_WINDOWS
  cockcoin_qt_SOURCES += $(COCKCOIN_RC)
endif
cockcoin_qt_LDADD = libcockcoinqt.a $(LIBCOCKCOIN_SERVER)
if ENABLE_WALLET
cockcoin_qt_LDADD += $(LIBCOCKCOIN_WALLET)
endif
cockcoin_qt_LDADD += $(LIBCOCKCOIN_CLI) $(LIBCOCKCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
cockcoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

cockcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/cockcoinstrings.cpp

translate: cockcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(COCKCOIN_QT_CPP) $(COCKCOIN_QT_H) $(COCKCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/cockcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name cockcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
