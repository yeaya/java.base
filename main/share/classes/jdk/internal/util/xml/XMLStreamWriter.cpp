#include <jdk/internal/util/xml/XMLStreamWriter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef DEFAULT_CHARSET
#undef DEFAULT_ENCODING
#undef DEFAULT_XML_VERSION
#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {

$FieldInfo _XMLStreamWriter_FieldInfo_[] = {
	{"DEFAULT_XML_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriter, DEFAULT_XML_VERSION)},
	{"DEFAULT_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriter, DEFAULT_ENCODING)},
	{"DEFAULT_CHARSET", "Ljava/nio/charset/Charset;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriter, DEFAULT_CHARSET)},
	{}
};

$MethodInfo _XMLStreamWriter_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeCData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeCharacters", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeCharacters", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeDTD", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeEndDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeEndElement", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeStartDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "jdk.internal.util.xml.XMLStreamException"},
	{}
};

$ClassInfo _XMLStreamWriter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.util.xml.XMLStreamWriter",
	nullptr,
	nullptr,
	_XMLStreamWriter_FieldInfo_,
	_XMLStreamWriter_MethodInfo_
};

$Object* allocate$XMLStreamWriter($Class* clazz) {
	return $of($alloc(XMLStreamWriter));
}

$String* XMLStreamWriter::DEFAULT_XML_VERSION = nullptr;
$String* XMLStreamWriter::DEFAULT_ENCODING = nullptr;
$Charset* XMLStreamWriter::DEFAULT_CHARSET = nullptr;

void clinit$XMLStreamWriter($Class* class$) {
	$assignStatic(XMLStreamWriter::DEFAULT_XML_VERSION, "1.0"_s);
	$assignStatic(XMLStreamWriter::DEFAULT_ENCODING, "UTF-8"_s);
	$init($StandardCharsets);
	$assignStatic(XMLStreamWriter::DEFAULT_CHARSET, $StandardCharsets::UTF_8);
}

$Class* XMLStreamWriter::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriter, name, initialize, &_XMLStreamWriter_ClassInfo_, clinit$XMLStreamWriter, allocate$XMLStreamWriter);
	return class$;
}

$Class* XMLStreamWriter::class$ = nullptr;

			} // xml
		} // util
	} // internal
} // jdk