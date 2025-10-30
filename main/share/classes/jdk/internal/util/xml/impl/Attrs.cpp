#include <jdk/internal/util/xml/impl/Attrs.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::jdk::internal::org::xml::sax::Attributes;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _Attrs_FieldInfo_[] = {
	{"mItems", "[Ljava/lang/String;", nullptr, 0, $field(Attrs, mItems)},
	{"mLength", "C", nullptr, $PRIVATE, $field(Attrs, mLength)},
	{"mAttrIdx", "C", nullptr, $PRIVATE, $field(Attrs, mAttrIdx)},
	{}
};

$MethodInfo _Attrs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Attrs::*)()>(&Attrs::init$))},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndexNullNS", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, 0},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isDeclared", "(I)Z", nullptr, $PUBLIC},
	{"isDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isDeclared", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC},
	{"isSpecified", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isSpecified", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"setLength", "(C)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Attrs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.impl.Attrs",
	"java.lang.Object",
	"jdk.internal.org.xml.sax.Attributes",
	_Attrs_FieldInfo_,
	_Attrs_MethodInfo_
};

$Object* allocate$Attrs($Class* clazz) {
	return $of($alloc(Attrs));
}

void Attrs::init$() {
	this->mAttrIdx = (char16_t)0;
	$set(this, mItems, $new($StringArray, (8 << 3)));
}

void Attrs::setLength(char16_t length) {
	if (length > ((char16_t)($nc(this->mItems)->length >> 3))) {
		$set(this, mItems, $new($StringArray, length << 3));
	}
	this->mLength = length;
}

int32_t Attrs::getLength() {
	return this->mLength;
}

$String* Attrs::getURI(int32_t index) {
	return ((index >= 0) && (index < this->mLength)) ? ($nc(this->mItems)->get(index << 3)) : ($String*)nullptr;
}

$String* Attrs::getLocalName(int32_t index) {
	return ((index >= 0) && (index < this->mLength)) ? ($nc(this->mItems)->get((index << 3) + 2)) : ($String*)nullptr;
}

$String* Attrs::getQName(int32_t index) {
	if ((index < 0) || (index >= this->mLength)) {
		return nullptr;
	}
	return $nc(this->mItems)->get((index << 3) + 1);
}

$String* Attrs::getType(int32_t index) {
	return ((index >= 0) && (index < ($nc(this->mItems)->length >> 3))) ? ($nc(this->mItems)->get((index << 3) + 4)) : ($String*)nullptr;
}

$String* Attrs::getValue(int32_t index) {
	return ((index >= 0) && (index < this->mLength)) ? ($nc(this->mItems)->get((index << 3) + 3)) : ($String*)nullptr;
}

int32_t Attrs::getIndex($String* uri, $String* localName) {
	char16_t len = this->mLength;
	for (char16_t idx = (char16_t)0; idx < len; ++idx) {
		bool var$0 = $nc(($nc(this->mItems)->get(idx << 3)))->equals(uri);
		if (var$0 && $nc($nc(this->mItems)->get((idx << 3) + 2))->equals(localName)) {
			return idx;
		}
	}
	return -1;
}

int32_t Attrs::getIndexNullNS($String* uri, $String* localName) {
	char16_t len = this->mLength;
	if (uri != nullptr) {
		for (char16_t idx = (char16_t)0; idx < len; ++idx) {
			bool var$0 = $nc(($nc(this->mItems)->get(idx << 3)))->equals(uri);
			if (var$0 && $nc($nc(this->mItems)->get((idx << 3) + 2))->equals(localName)) {
				return idx;
			}
		}
	} else {
		for (char16_t idx = (char16_t)0; idx < len; ++idx) {
			if ($nc($nc(this->mItems)->get((idx << 3) + 2))->equals(localName)) {
				return idx;
			}
		}
	}
	return -1;
}

int32_t Attrs::getIndex($String* qName) {
	char16_t len = this->mLength;
	for (char16_t idx = (char16_t)0; idx < len; ++idx) {
		if ($nc($nc(this->mItems)->get((idx << 3) + 1))->equals(qName)) {
			return idx;
		}
	}
	return -1;
}

$String* Attrs::getType($String* uri, $String* localName) {
	int32_t idx = getIndex(uri, localName);
	return (idx >= 0) ? ($nc(this->mItems)->get((idx << 3) + 4)) : ($String*)nullptr;
}

$String* Attrs::getType($String* qName) {
	int32_t idx = getIndex(qName);
	return (idx >= 0) ? ($nc(this->mItems)->get((idx << 3) + 4)) : ($String*)nullptr;
}

$String* Attrs::getValue($String* uri, $String* localName) {
	int32_t idx = getIndex(uri, localName);
	return (idx >= 0) ? ($nc(this->mItems)->get((idx << 3) + 3)) : ($String*)nullptr;
}

$String* Attrs::getValue($String* qName) {
	int32_t idx = getIndex(qName);
	return (idx >= 0) ? ($nc(this->mItems)->get((idx << 3) + 3)) : ($String*)nullptr;
}

bool Attrs::isDeclared(int32_t index) {
	if ((index < 0) || (index >= this->mLength)) {
		$throwNew($ArrayIndexOutOfBoundsException, ""_s);
	}
	return (($nc(this->mItems)->get((index << 3) + 5)) != nullptr);
}

bool Attrs::isDeclared($String* qName) {
	int32_t idx = getIndex(qName);
	if (idx < 0) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	return (($nc(this->mItems)->get((idx << 3) + 5)) != nullptr);
}

bool Attrs::isDeclared($String* uri, $String* localName) {
	int32_t idx = getIndex(uri, localName);
	if (idx < 0) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	return (($nc(this->mItems)->get((idx << 3) + 5)) != nullptr);
}

bool Attrs::isSpecified(int32_t index) {
	if ((index < 0) || (index >= this->mLength)) {
		$throwNew($ArrayIndexOutOfBoundsException, ""_s);
	}
	$var($String, str, $nc(this->mItems)->get((index << 3) + 5));
	return ((str != nullptr) ? ($nc(str)->charAt(0) == u'd') : true);
}

bool Attrs::isSpecified($String* uri, $String* localName) {
	int32_t idx = getIndex(uri, localName);
	if (idx < 0) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	$var($String, str, $nc(this->mItems)->get((idx << 3) + 5));
	return ((str != nullptr) ? ($nc(str)->charAt(0) == u'd') : true);
}

bool Attrs::isSpecified($String* qName) {
	int32_t idx = getIndex(qName);
	if (idx < 0) {
		$throwNew($IllegalArgumentException, ""_s);
	}
	$var($String, str, $nc(this->mItems)->get((idx << 3) + 5));
	return ((str != nullptr) ? ($nc(str)->charAt(0) == u'd') : true);
}

Attrs::Attrs() {
}

$Class* Attrs::load$($String* name, bool initialize) {
	$loadClass(Attrs, name, initialize, &_Attrs_ClassInfo_, allocate$Attrs);
	return class$;
}

$Class* Attrs::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk