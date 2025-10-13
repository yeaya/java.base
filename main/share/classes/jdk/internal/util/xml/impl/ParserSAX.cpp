#include <jdk/internal/util/xml/impl/ParserSAX.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/xml/sax/Attributes.h>
#include <jdk/internal/org/xml/sax/ContentHandler.h>
#include <jdk/internal/org/xml/sax/DTDHandler.h>
#include <jdk/internal/org/xml/sax/EntityResolver.h>
#include <jdk/internal/org/xml/sax/ErrorHandler.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jdk/internal/org/xml/sax/Locator.h>
#include <jdk/internal/org/xml/sax/SAXException.h>
#include <jdk/internal/org/xml/sax/SAXParseException.h>
#include <jdk/internal/org/xml/sax/helpers/DefaultHandler.h>
#include <jdk/internal/util/xml/impl/Attrs.h>
#include <jdk/internal/util/xml/impl/Input.h>
#include <jdk/internal/util/xml/impl/Pair.h>
#include <jdk/internal/util/xml/impl/Parser.h>
#include <jcpp.h>

#undef BUFFSIZE_READER
#undef EOS
#undef EV_CDAT
#undef EV_COMM
#undef EV_DTD
#undef EV_ELM
#undef EV_ELME
#undef EV_ELMS
#undef EV_ENT
#undef EV_NULL
#undef EV_PI
#undef EV_TEXT
#undef EV_WSPC
#undef FAULT
#undef FEATURE_NS
#undef FEATURE_PREF
#undef PH_AFTER_DOC
#undef PH_BEFORE_DOC
#undef PH_DOCELM
#undef PH_DOCELM_MISC
#undef PH_DTD_MISC
#undef PH_MISC_DTD

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Attributes = ::jdk::internal::org::xml::sax::Attributes;
using $ContentHandler = ::jdk::internal::org::xml::sax::ContentHandler;
using $DTDHandler = ::jdk::internal::org::xml::sax::DTDHandler;
using $EntityResolver = ::jdk::internal::org::xml::sax::EntityResolver;
using $ErrorHandler = ::jdk::internal::org::xml::sax::ErrorHandler;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;
using $Locator = ::jdk::internal::org::xml::sax::Locator;
using $SAXException = ::jdk::internal::org::xml::sax::SAXException;
using $SAXParseException = ::jdk::internal::org::xml::sax::SAXParseException;
using $XMLReader = ::jdk::internal::org::xml::sax::XMLReader;
using $DefaultHandler = ::jdk::internal::org::xml::sax::helpers::DefaultHandler;
using $Attrs = ::jdk::internal::util::xml::impl::Attrs;
using $Input = ::jdk::internal::util::xml::impl::Input;
using $Pair = ::jdk::internal::util::xml::impl::Pair;
using $Parser = ::jdk::internal::util::xml::impl::Parser;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _ParserSAX_FieldInfo_[] = {
	{"FEATURE_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ParserSAX, FEATURE_NS)},
	{"FEATURE_PREF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ParserSAX, FEATURE_PREF)},
	{"mFNamespaces", "Z", nullptr, $PRIVATE, $field(ParserSAX, mFNamespaces)},
	{"mFPrefixes", "Z", nullptr, $PRIVATE, $field(ParserSAX, mFPrefixes)},
	{"mHand", "Ljdk/internal/org/xml/sax/helpers/DefaultHandler;", nullptr, $PRIVATE, $field(ParserSAX, mHand)},
	{"mHandCont", "Ljdk/internal/org/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(ParserSAX, mHandCont)},
	{"mHandDtd", "Ljdk/internal/org/xml/sax/DTDHandler;", nullptr, $PRIVATE, $field(ParserSAX, mHandDtd)},
	{"mHandErr", "Ljdk/internal/org/xml/sax/ErrorHandler;", nullptr, $PRIVATE, $field(ParserSAX, mHandErr)},
	{"mHandEnt", "Ljdk/internal/org/xml/sax/EntityResolver;", nullptr, $PRIVATE, $field(ParserSAX, mHandEnt)},
	{}
};

$MethodInfo _ParserSAX_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParserSAX::*)()>(&ParserSAX::init$))},
	{"bflash", "()V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"bflash_ws", "()V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"comm", "([CI)V", nullptr, $PROTECTED},
	{"docType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getContentHandler", "()Ljdk/internal/org/xml/sax/ContentHandler;", nullptr, $PUBLIC},
	{"getDTDHandler", "()Ljdk/internal/org/xml/sax/DTDHandler;", nullptr, $PUBLIC},
	{"getEntityResolver", "()Ljdk/internal/org/xml/sax/EntityResolver;", nullptr, $PUBLIC},
	{"getErrorHandler", "()Ljdk/internal/org/xml/sax/ErrorHandler;", nullptr, $PUBLIC},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newPrefix", "()V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"notDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"panic", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,jdk.internal.org.xml.sax.SAXException"},
	{"parse", "(Ljdk/internal/org/xml/sax/InputSource;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,jdk.internal.org.xml.sax.SAXException"},
	{"parse", "(Ljava/io/InputStream;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(ParserSAX::*)($InputStream*,$DefaultHandler*)>(&ParserSAX::parse)), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljdk/internal/org/xml/sax/InputSource;Ljdk/internal/org/xml/sax/helpers/DefaultHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(ParserSAX::*)($InputSource*,$DefaultHandler*)>(&ParserSAX::parse)), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "()V", nullptr, $PRIVATE, $method(static_cast<void(ParserSAX::*)()>(&ParserSAX::parse)), "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"pi", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"resolveEnt", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/xml/sax/InputSource;", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException,java.io.IOException"},
	{"setContentHandler", "(Ljdk/internal/org/xml/sax/ContentHandler;)V", nullptr, $PUBLIC},
	{"setDTDHandler", "(Ljdk/internal/org/xml/sax/DTDHandler;)V", nullptr, $PUBLIC},
	{"setEntityResolver", "(Ljdk/internal/org/xml/sax/EntityResolver;)V", nullptr, $PUBLIC},
	{"setErrorHandler", "(Ljdk/internal/org/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"skippedEnt", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startInternalSub", "()V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ParserSAX_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.util.xml.impl.ParserSAX",
	"jdk.internal.util.xml.impl.Parser",
	"jdk.internal.org.xml.sax.XMLReader,jdk.internal.org.xml.sax.Locator",
	_ParserSAX_FieldInfo_,
	_ParserSAX_MethodInfo_
};

$Object* allocate$ParserSAX($Class* clazz) {
	return $of($alloc(ParserSAX));
}

int32_t ParserSAX::hashCode() {
	 return this->$Parser::hashCode();
}

bool ParserSAX::equals(Object$* obj) {
	 return this->$Parser::equals(obj);
}

$Object* ParserSAX::clone() {
	 return this->$Parser::clone();
}

$String* ParserSAX::toString() {
	 return this->$Parser::toString();
}

void ParserSAX::finalize() {
	this->$Parser::finalize();
}

$String* ParserSAX::FEATURE_NS = nullptr;
$String* ParserSAX::FEATURE_PREF = nullptr;

void ParserSAX::init$() {
	$Parser::init$();
	this->mFNamespaces = true;
	this->mFPrefixes = false;
	$set(this, mHand, $new($DefaultHandler));
	$set(this, mHandCont, this->mHand);
	$set(this, mHandDtd, this->mHand);
	$set(this, mHandErr, this->mHand);
	$set(this, mHandEnt, this->mHand);
}

$ContentHandler* ParserSAX::getContentHandler() {
	return (!$equals(this->mHandCont, this->mHand)) ? this->mHandCont : ($ContentHandler*)nullptr;
}

void ParserSAX::setContentHandler($ContentHandler* handler) {
	if (handler == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mHandCont, handler);
}

$DTDHandler* ParserSAX::getDTDHandler() {
	return (!$equals(this->mHandDtd, this->mHand)) ? this->mHandDtd : ($DTDHandler*)nullptr;
}

void ParserSAX::setDTDHandler($DTDHandler* handler) {
	if (handler == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mHandDtd, handler);
}

$ErrorHandler* ParserSAX::getErrorHandler() {
	return (!$equals(this->mHandErr, this->mHand)) ? this->mHandErr : ($ErrorHandler*)nullptr;
}

void ParserSAX::setErrorHandler($ErrorHandler* handler) {
	if (handler == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mHandErr, handler);
}

$EntityResolver* ParserSAX::getEntityResolver() {
	return (!$equals(this->mHandEnt, this->mHand)) ? this->mHandEnt : ($EntityResolver*)nullptr;
}

void ParserSAX::setEntityResolver($EntityResolver* resolver) {
	if (resolver == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mHandEnt, resolver);
}

$String* ParserSAX::getPublicId() {
	return (this->mInp != nullptr) ? $nc(this->mInp)->pubid : ($String*)nullptr;
}

$String* ParserSAX::getSystemId() {
	return (this->mInp != nullptr) ? $nc(this->mInp)->sysid : ($String*)nullptr;
}

int32_t ParserSAX::getLineNumber() {
	return -1;
}

int32_t ParserSAX::getColumnNumber() {
	return -1;
}

void ParserSAX::parse($String* systemId) {
	parse($$new($InputSource, systemId));
}

void ParserSAX::parse($InputSource* is) {
	if (is == nullptr) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	$set(this, mInp, $new($Input, $Parser::BUFFSIZE_READER));
	this->mPh = $Parser::PH_BEFORE_DOC;
	try {
		setinp(is);
	} catch ($SAXException&) {
		$var($SAXException, saxe, $catch());
		$throw(saxe);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throw(ioe);
	} catch ($RuntimeException&) {
		$var($RuntimeException, rte, $catch());
		$throw(rte);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		panic($(e->toString()));
	}
	parse();
}

void ParserSAX::parse($InputStream* src, $DefaultHandler* handler) {
	if ((src == nullptr) || (handler == nullptr)) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	parse($$new($InputSource, src), handler);
}

void ParserSAX::parse($InputSource* is, $DefaultHandler* handler) {
	if ((is == nullptr) || (handler == nullptr)) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	$set(this, mHandCont, handler);
	$set(this, mHandDtd, handler);
	$set(this, mHandErr, handler);
	$set(this, mHandEnt, handler);
	$set(this, mInp, $new($Input, $Parser::BUFFSIZE_READER));
	this->mPh = $Parser::PH_BEFORE_DOC;
	try {
		setinp(is);
	} catch ($SAXException&) {
		$var($Exception, saxe, $catch());
		$throw(saxe);
	} catch ($IOException&) {
		$var($Exception, saxe, $catch());
		$throw(saxe);
	} catch ($RuntimeException&) {
		$var($Exception, saxe, $catch());
		$throw(saxe);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		panic($(e->toString()));
	}
	parse();
}

void ParserSAX::parse() {
	init();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->mHandCont)->setDocumentLocator(this);
				$nc(this->mHandCont)->startDocument();
				if (this->mPh != $Parser::PH_MISC_DTD) {
					this->mPh = $Parser::PH_MISC_DTD;
				}
				int32_t evt = $Parser::EV_NULL;
				do {
					wsskip();
					switch (evt = step()) {
					case $Parser::EV_ELM:
						{}
					case $Parser::EV_ELMS:
						{
							this->mPh = $Parser::PH_DOCELM;
							break;
						}
					case $Parser::EV_COMM:
						{}
					case $Parser::EV_PI:
						{
							break;
						}
					case $Parser::EV_DTD:
						{
							if (this->mPh >= $Parser::PH_DTD_MISC) {
								$init($Parser);
								panic($Parser::FAULT);
							}
							this->mPh = $Parser::PH_DTD_MISC;
							break;
						}
					default:
						{
							$init($Parser);
							panic($Parser::FAULT);
						}
					}
				} while (this->mPh < $Parser::PH_DOCELM);
				do {
					switch (evt) {
					case $Parser::EV_ELM:
						{}
					case $Parser::EV_ELMS:
						{
							if (this->mIsNSAware == true) {
								$nc(this->mHandCont)->startElement($nc(this->mElm)->value, $nc(this->mElm)->name, ""_s, this->mAttrs);
							} else {
								$nc(this->mHandCont)->startElement(""_s, ""_s, $nc(this->mElm)->name, this->mAttrs);
							}
							if (evt == $Parser::EV_ELMS) {
								evt = step();
								break;
							}
						}
					case $Parser::EV_ELME:
						{
							if (this->mIsNSAware == true) {
								$nc(this->mHandCont)->endElement($nc(this->mElm)->value, $nc(this->mElm)->name, ""_s);
							} else {
								$nc(this->mHandCont)->endElement(""_s, ""_s, $nc(this->mElm)->name);
							}
							while ($nc(this->mPref)->list == this->mElm) {
								$nc(this->mHandCont)->endPrefixMapping($nc(this->mPref)->name);
								$set(this, mPref, del(this->mPref));
							}
							$set(this, mElm, del(this->mElm));
							if (this->mElm == nullptr) {
								this->mPh = $Parser::PH_DOCELM_MISC;
							} else {
								evt = step();
							}
							break;
						}
					case $Parser::EV_TEXT:
						{}
					case $Parser::EV_WSPC:
						{}
					case $Parser::EV_CDAT:
						{}
					case $Parser::EV_COMM:
						{}
					case $Parser::EV_PI:
						{}
					case $Parser::EV_ENT:
						{
							evt = step();
							break;
						}
					default:
						{
							$init($Parser);
							panic($Parser::FAULT);
						}
					}
				} while (this->mPh == $Parser::PH_DOCELM);
				do {
					if (wsskip() == $Parser::EOS) {
						break;
					}
					switch (step()) {
					case $Parser::EV_COMM:
						{}
					case $Parser::EV_PI:
						{
							break;
						}
					default:
						{
							$init($Parser);
							panic($Parser::FAULT);
						}
					}
				} while (this->mPh == $Parser::PH_DOCELM_MISC);
				this->mPh = $Parser::PH_AFTER_DOC;
			} catch ($SAXException&) {
				$var($SAXException, saxe, $catch());
				$throw(saxe);
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				$throw(ioe);
			} catch ($RuntimeException&) {
				$var($RuntimeException, rte, $catch());
				$throw(rte);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				panic($(e->toString()));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->mHandCont)->endDocument();
			cleanup();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ParserSAX::docType($String* name, $String* pubid, $String* sysid) {
	$nc(this->mHandDtd)->startDTD(name, pubid, sysid);
}

void ParserSAX::startInternalSub() {
	$nc(this->mHandDtd)->startInternalSub();
}

void ParserSAX::comm($chars* text, int32_t length) {
}

void ParserSAX::pi($String* target, $String* body) {
	$nc(this->mHandCont)->processingInstruction(target, body);
}

void ParserSAX::newPrefix() {
	$nc(this->mHandCont)->startPrefixMapping($nc(this->mPref)->name, $nc(this->mPref)->value);
}

void ParserSAX::skippedEnt($String* name) {
	$nc(this->mHandCont)->skippedEntity(name);
}

$InputSource* ParserSAX::resolveEnt($String* name, $String* pubid, $String* sysid) {
	return $nc(this->mHandEnt)->resolveEntity(pubid, sysid);
}

void ParserSAX::notDecl($String* name, $String* pubid, $String* sysid) {
	$nc(this->mHandDtd)->notationDecl(name, pubid, sysid);
}

void ParserSAX::unparsedEntDecl($String* name, $String* pubid, $String* sysid, $String* notation) {
	$nc(this->mHandDtd)->unparsedEntityDecl(name, pubid, sysid, notation);
}

void ParserSAX::panic($String* msg) {
	$var($SAXParseException, spe, $new($SAXParseException, msg, this));
	$nc(this->mHandErr)->fatalError(spe);
	$throw(spe);
}

void ParserSAX::bflash() {
	if (this->mBuffIdx >= 0) {
		$nc(this->mHandCont)->characters(this->mBuff, 0, (this->mBuffIdx + 1));
		this->mBuffIdx = -1;
	}
}

void ParserSAX::bflash_ws() {
	if (this->mBuffIdx >= 0) {
		$nc(this->mHandCont)->characters(this->mBuff, 0, (this->mBuffIdx + 1));
		this->mBuffIdx = -1;
	}
}

bool ParserSAX::getFeature($String* name) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

void ParserSAX::setFeature($String* name, bool value) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

$Object* ParserSAX::getProperty($String* name) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

void ParserSAX::setProperty($String* name, Object$* value) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
}

ParserSAX::ParserSAX() {
}

void clinit$ParserSAX($Class* class$) {
	$assignStatic(ParserSAX::FEATURE_NS, "http://xml.org/sax/features/namespaces"_s);
	$assignStatic(ParserSAX::FEATURE_PREF, "http://xml.org/sax/features/namespace-prefixes"_s);
}

$Class* ParserSAX::load$($String* name, bool initialize) {
	$loadClass(ParserSAX, name, initialize, &_ParserSAX_ClassInfo_, clinit$ParserSAX, allocate$ParserSAX);
	return class$;
}

$Class* ParserSAX::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk