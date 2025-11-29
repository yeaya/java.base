#include <jdk/internal/util/xml/impl/XMLStreamWriterImpl$Element.h>

#include <jdk/internal/util/xml/impl/XMLStreamWriterImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _XMLStreamWriterImpl$Element_FieldInfo_[] = {
	{"_parent", "Ljdk/internal/util/xml/impl/XMLStreamWriterImpl$Element;", nullptr, $PROTECTED, $field(XMLStreamWriterImpl$Element, _parent)},
	{"_Depth", "S", nullptr, $PROTECTED, $field(XMLStreamWriterImpl$Element, _Depth)},
	{"_isEmptyElement", "Z", nullptr, 0, $field(XMLStreamWriterImpl$Element, _isEmptyElement)},
	{"_localpart", "Ljava/lang/String;", nullptr, 0, $field(XMLStreamWriterImpl$Element, _localpart)},
	{"_state", "I", nullptr, 0, $field(XMLStreamWriterImpl$Element, _state)},
	{}
};

$MethodInfo _XMLStreamWriterImpl$Element_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamWriterImpl$Element::*)()>(&XMLStreamWriterImpl$Element::init$))},
	{"<init>", "(Ljdk/internal/util/xml/impl/XMLStreamWriterImpl$Element;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamWriterImpl$Element::*)(XMLStreamWriterImpl$Element*,$String*,bool)>(&XMLStreamWriterImpl$Element::init$))},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParent", "()Ljdk/internal/util/xml/impl/XMLStreamWriterImpl$Element;", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"setState", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLStreamWriterImpl$Element_InnerClassesInfo_[] = {
	{"jdk.internal.util.xml.impl.XMLStreamWriterImpl$Element", "jdk.internal.util.xml.impl.XMLStreamWriterImpl", "Element", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XMLStreamWriterImpl$Element_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.impl.XMLStreamWriterImpl$Element",
	"java.lang.Object",
	nullptr,
	_XMLStreamWriterImpl$Element_FieldInfo_,
	_XMLStreamWriterImpl$Element_MethodInfo_,
	nullptr,
	nullptr,
	_XMLStreamWriterImpl$Element_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.util.xml.impl.XMLStreamWriterImpl"
};

$Object* allocate$XMLStreamWriterImpl$Element($Class* clazz) {
	return $of($alloc(XMLStreamWriterImpl$Element));
}

void XMLStreamWriterImpl$Element::init$() {
	this->_isEmptyElement = false;
}

void XMLStreamWriterImpl$Element::init$(XMLStreamWriterImpl$Element* parent, $String* localpart, bool isEmpty) {
	this->_isEmptyElement = false;
	$set(this, _parent, parent);
	$set(this, _localpart, localpart);
	this->_isEmptyElement = isEmpty;
}

XMLStreamWriterImpl$Element* XMLStreamWriterImpl$Element::getParent() {
	return this->_parent;
}

$String* XMLStreamWriterImpl$Element::getLocalName() {
	return this->_localpart;
}

int32_t XMLStreamWriterImpl$Element::getState() {
	return this->_state;
}

void XMLStreamWriterImpl$Element::setState(int32_t state) {
	this->_state = state;
}

bool XMLStreamWriterImpl$Element::isEmpty() {
	return this->_isEmptyElement;
}

XMLStreamWriterImpl$Element::XMLStreamWriterImpl$Element() {
}

$Class* XMLStreamWriterImpl$Element::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriterImpl$Element, name, initialize, &_XMLStreamWriterImpl$Element_ClassInfo_, allocate$XMLStreamWriterImpl$Element);
	return class$;
}

$Class* XMLStreamWriterImpl$Element::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk