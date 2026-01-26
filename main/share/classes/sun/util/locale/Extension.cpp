#include <sun/util/locale/Extension.h>

#include <sun/util/locale/LanguageTag.h>
#include <jcpp.h>

#undef SEP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LanguageTag = ::sun::util::locale::LanguageTag;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _Extension_FieldInfo_[] = {
	{"key", "C", nullptr, $PRIVATE | $FINAL, $field(Extension, key)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Extension, value)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Extension, id)},
	{}
};

$MethodInfo _Extension_MethodInfo_[] = {
	{"<init>", "(C)V", nullptr, $PROTECTED, $method(Extension, init$, void, char16_t)},
	{"<init>", "(CLjava/lang/String;)V", nullptr, 0, $method(Extension, init$, void, char16_t, $String*)},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Extension, getID, $String*)},
	{"getKey", "()C", nullptr, $PUBLIC, $virtualMethod(Extension, getKey, char16_t)},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Extension, getValue, $String*)},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(Extension, setValue, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Extension, toString, $String*)},
	{}
};

$ClassInfo _Extension_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.locale.Extension",
	"java.lang.Object",
	nullptr,
	_Extension_FieldInfo_,
	_Extension_MethodInfo_
};

$Object* allocate$Extension($Class* clazz) {
	return $of($alloc(Extension));
}

void Extension::init$(char16_t key) {
	this->key = key;
}

void Extension::init$(char16_t key, $String* value) {
	this->key = key;
	setValue(value);
}

void Extension::setValue($String* value) {
	$set(this, value, value);
	$init($LanguageTag);
	$set(this, id, $str({$$str(this->key), $LanguageTag::SEP, value}));
}

char16_t Extension::getKey() {
	return this->key;
}

$String* Extension::getValue() {
	return this->value;
}

$String* Extension::getID() {
	return this->id;
}

$String* Extension::toString() {
	return getID();
}

Extension::Extension() {
}

$Class* Extension::load$($String* name, bool initialize) {
	$loadClass(Extension, name, initialize, &_Extension_ClassInfo_, allocate$Extension);
	return class$;
}

$Class* Extension::class$ = nullptr;

		} // locale
	} // util
} // sun