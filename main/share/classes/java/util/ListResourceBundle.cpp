#include <java/util/ListResourceBundle.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <sun/util/ResourceBundleEnumeration.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $ResourceBundleEnumeration = ::sun::util::ResourceBundleEnumeration;

namespace java {
	namespace util {

void ListResourceBundle::init$() {
	$ResourceBundle::init$();
}

$Object* ListResourceBundle::handleGetObject($String* key) {
	if (this->lookup == nullptr) {
		loadLookup();
	}
	if (key == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(this->lookup)->get(key);
}

$Enumeration* ListResourceBundle::getKeys() {
	$useLocalObjectStack();
	if (this->lookup == nullptr) {
		loadLookup();
	}
	$var($ResourceBundle, parent, this->parent);
	$var($Set, var$0, $nc(this->lookup)->keySet());
	return $new($ResourceBundleEnumeration, var$0, (parent != nullptr) ? $(parent->getKeys()) : ($Enumeration*)nullptr);
}

$Set* ListResourceBundle::handleKeySet() {
	if (this->lookup == nullptr) {
		loadLookup();
	}
	return $nc(this->lookup)->keySet();
}

void ListResourceBundle::loadLookup() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->lookup != nullptr) {
			return;
		}
		$var($ObjectArray2, contents, getContents());
		$var($HashMap, temp, $new($HashMap, $nc(contents)->length));
		{
			$var($ObjectArray2, arr$, contents);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($ObjectArray, content, arr$->get(i$));
				{
					$var($String, key, $cast($String, $nc(content)->get(0)));
					$var($Object0, value, content->get(1));
					if (key == nullptr || value == nullptr) {
						$throwNew($NullPointerException);
					}
					temp->put(key, value);
				}
			}
		}
		$set(this, lookup, temp);
	}
}

ListResourceBundle::ListResourceBundle() {
}

$Class* ListResourceBundle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lookup", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $VOLATILE, $field(ListResourceBundle, lookup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ListResourceBundle, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ListResourceBundle, getContents, $ObjectArray2*)},
		{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ListResourceBundle, getKeys, $Enumeration*)},
		{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ListResourceBundle, handleGetObject, $Object*, $String*)},
		{"handleKeySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED, $virtualMethod(ListResourceBundle, handleKeySet, $Set*)},
		{"loadLookup", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(ListResourceBundle, loadLookup, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.util.ListResourceBundle",
		"java.util.ResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ListResourceBundle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ListResourceBundle);
	});
	return class$;
}

$Class* ListResourceBundle::class$ = nullptr;

	} // util
} // java