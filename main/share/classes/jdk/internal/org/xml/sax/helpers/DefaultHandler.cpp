#include <jdk/internal/org/xml/sax/helpers/DefaultHandler.h>

#include <jdk/internal/org/xml/sax/Attributes.h>
#include <jdk/internal/org/xml/sax/EntityResolver.h>
#include <jdk/internal/org/xml/sax/InputSource.h>
#include <jdk/internal/org/xml/sax/Locator.h>
#include <jdk/internal/org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::jdk::internal::org::xml::sax::Attributes;
using $EntityResolver = ::jdk::internal::org::xml::sax::EntityResolver;
using $InputSource = ::jdk::internal::org::xml::sax::InputSource;
using $Locator = ::jdk::internal::org::xml::sax::Locator;
using $SAXParseException = ::jdk::internal::org::xml::sax::SAXParseException;

namespace jdk {
	namespace internal {
		namespace org {
			namespace xml {
				namespace sax {
					namespace helpers {

$MethodInfo _DefaultHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultHandler::*)()>(&DefaultHandler::init$))},
	{"characters", "([CII)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"error", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"fatalError", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/xml/sax/InputSource;", nullptr, $PUBLIC, nullptr, "java.io.IOException,jdk.internal.org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Ljdk/internal/org/xml/sax/Locator;)V", nullptr, $PUBLIC},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/xml/sax/Attributes;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{"warning", "(Ljdk/internal/org/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "jdk.internal.org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DefaultHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.xml.sax.helpers.DefaultHandler",
	"java.lang.Object",
	"jdk.internal.org.xml.sax.EntityResolver,jdk.internal.org.xml.sax.DTDHandler,jdk.internal.org.xml.sax.ContentHandler,jdk.internal.org.xml.sax.ErrorHandler",
	nullptr,
	_DefaultHandler_MethodInfo_
};

$Object* allocate$DefaultHandler($Class* clazz) {
	return $of($alloc(DefaultHandler));
}

int32_t DefaultHandler::hashCode() {
	 return this->$EntityResolver::hashCode();
}

bool DefaultHandler::equals(Object$* obj) {
	 return this->$EntityResolver::equals(obj);
}

$Object* DefaultHandler::clone() {
	 return this->$EntityResolver::clone();
}

$String* DefaultHandler::toString() {
	 return this->$EntityResolver::toString();
}

void DefaultHandler::finalize() {
	this->$EntityResolver::finalize();
}

void DefaultHandler::init$() {
}

$InputSource* DefaultHandler::resolveEntity($String* publicId, $String* systemId) {
	return nullptr;
}

void DefaultHandler::notationDecl($String* name, $String* publicId, $String* systemId) {
}

void DefaultHandler::unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) {
}

void DefaultHandler::setDocumentLocator($Locator* locator) {
}

void DefaultHandler::startDocument() {
}

void DefaultHandler::endDocument() {
}

void DefaultHandler::startPrefixMapping($String* prefix, $String* uri) {
}

void DefaultHandler::endPrefixMapping($String* prefix) {
}

void DefaultHandler::startElement($String* uri, $String* localName, $String* qName, $Attributes* attributes) {
}

void DefaultHandler::endElement($String* uri, $String* localName, $String* qName) {
}

void DefaultHandler::characters($chars* ch, int32_t start, int32_t length) {
}

void DefaultHandler::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
}

void DefaultHandler::processingInstruction($String* target, $String* data) {
}

void DefaultHandler::skippedEntity($String* name) {
}

void DefaultHandler::warning($SAXParseException* e) {
}

void DefaultHandler::error($SAXParseException* e) {
}

void DefaultHandler::fatalError($SAXParseException* e) {
	$throw(e);
}

DefaultHandler::DefaultHandler() {
}

$Class* DefaultHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultHandler, name, initialize, &_DefaultHandler_ClassInfo_, allocate$DefaultHandler);
	return class$;
}

$Class* DefaultHandler::class$ = nullptr;

					} // helpers
				} // sax
			} // xml
		} // org
	} // internal
} // jdk