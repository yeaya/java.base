#include <java/util/ResourceBundle$2.h>
#include <java/util/Enumeration.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace util {

void ResourceBundle$2::init$() {
	$ResourceBundle::init$();
}

$Enumeration* ResourceBundle$2::getKeys() {
	return nullptr;
}

$Object* ResourceBundle$2::handleGetObject($String* key) {
	return nullptr;
}

$String* ResourceBundle$2::toString() {
	return "NONEXISTENT_BUNDLE"_s;
}

ResourceBundle$2::ResourceBundle$2() {
}

$Class* ResourceBundle$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ResourceBundle$2, init$, void)},
		{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(ResourceBundle$2, getKeys, $Enumeration*)},
		{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(ResourceBundle$2, handleGetObject, $Object*, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResourceBundle$2, toString, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ResourceBundle",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ResourceBundle$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ResourceBundle$2",
		"java.util.ResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ResourceBundle"
	};
	$loadClass(ResourceBundle$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceBundle$2);
	});
	return class$;
}

$Class* ResourceBundle$2::class$ = nullptr;

	} // util
} // java