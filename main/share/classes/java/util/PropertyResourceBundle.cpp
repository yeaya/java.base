#include <java/util/PropertyResourceBundle.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <sun/nio/cs/ISO_8859_1.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/PropertyResourceBundleCharset.h>
#include <sun/util/ResourceBundleEnumeration.h>
#include <jcpp.h>

#undef INSTANCE
#undef ROOT

using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $ISO_8859_1 = ::sun::nio::cs::ISO_8859_1;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PropertyResourceBundleCharset = ::sun::util::PropertyResourceBundleCharset;
using $ResourceBundleEnumeration = ::sun::util::ResourceBundleEnumeration;

namespace java {
	namespace util {

$String* PropertyResourceBundle::encoding = nullptr;

void PropertyResourceBundle::init$($InputStream* stream) {
	$useLocalObjectStack();
	$init($ISO_8859_1);
	PropertyResourceBundle::init$($$new($InputStreamReader, stream, "ISO-8859-1"_s->equals(PropertyResourceBundle::encoding) ? $($nc($ISO_8859_1::INSTANCE)->newDecoder()) : $($$new($PropertyResourceBundleCharset, "UTF-8"_s->equals(PropertyResourceBundle::encoding))->newDecoder())));
}

void PropertyResourceBundle::init$($Reader* reader) {
	$ResourceBundle::init$();
	$var($Properties, properties, $new($Properties));
	properties->load(reader);
	$set(this, lookup, $new($HashMap, properties));
}

$Object* PropertyResourceBundle::handleGetObject($String* key) {
	if (key == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(this->lookup)->get(key);
}

$Enumeration* PropertyResourceBundle::getKeys() {
	$useLocalObjectStack();
	$var($ResourceBundle, parent, this->parent);
	$var($Set, var$0, $nc(this->lookup)->keySet());
	return $new($ResourceBundleEnumeration, var$0, (parent != nullptr) ? $(parent->getKeys()) : ($Enumeration*)nullptr);
}

$Set* PropertyResourceBundle::handleKeySet() {
	return $nc(this->lookup)->keySet();
}

void PropertyResourceBundle::clinit$($Class* clazz) {
	$init($Locale);
	$assignStatic(PropertyResourceBundle::encoding, $$nc($GetPropertyAction::privilegedGetProperty("java.util.PropertyResourceBundle.encoding"_s, ""_s))->toUpperCase($Locale::ROOT));
}

PropertyResourceBundle::PropertyResourceBundle() {
}

$Class* PropertyResourceBundle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encoding", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PropertyResourceBundle, encoding)},
		{"lookup", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(PropertyResourceBundle, lookup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(PropertyResourceBundle, init$, void, $InputStream*), "java.io.IOException"},
		{"<init>", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $method(PropertyResourceBundle, init$, void, $Reader*), "java.io.IOException"},
		{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(PropertyResourceBundle, getKeys, $Enumeration*)},
		{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PropertyResourceBundle, handleGetObject, $Object*, $String*)},
		{"handleKeySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED, $virtualMethod(PropertyResourceBundle, handleKeySet, $Set*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.PropertyResourceBundle",
		"java.util.ResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PropertyResourceBundle, name, initialize, &classInfo$$, PropertyResourceBundle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PropertyResourceBundle);
	});
	return class$;
}

$Class* PropertyResourceBundle::class$ = nullptr;

	} // util
} // java