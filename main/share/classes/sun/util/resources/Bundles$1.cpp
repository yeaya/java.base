#include <sun/util/resources/Bundles$1.h>

#include <java/util/Enumeration.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace util {
		namespace resources {

$MethodInfo _Bundles$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Bundles$1, init$, void)},
	{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(Bundles$1, getKeys, $Enumeration*)},
	{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(Bundles$1, handleGetObject, $Object*, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Bundles$1, toString, $String*)},
	{}
};

$EnclosingMethodInfo _Bundles$1_EnclosingMethodInfo_ = {
	"sun.util.resources.Bundles",
	nullptr,
	nullptr
};

$InnerClassInfo _Bundles$1_InnerClassesInfo_[] = {
	{"sun.util.resources.Bundles$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Bundles$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.resources.Bundles$1",
	"java.util.ResourceBundle",
	nullptr,
	nullptr,
	_Bundles$1_MethodInfo_,
	nullptr,
	&_Bundles$1_EnclosingMethodInfo_,
	_Bundles$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.resources.Bundles"
};

$Object* allocate$Bundles$1($Class* clazz) {
	return $of($alloc(Bundles$1));
}

void Bundles$1::init$() {
	$ResourceBundle::init$();
}

$Enumeration* Bundles$1::getKeys() {
	return nullptr;
}

$Object* Bundles$1::handleGetObject($String* key) {
	return $of(nullptr);
}

$String* Bundles$1::toString() {
	return "NONEXISTENT_BUNDLE"_s;
}

Bundles$1::Bundles$1() {
}

$Class* Bundles$1::load$($String* name, bool initialize) {
	$loadClass(Bundles$1, name, initialize, &_Bundles$1_ClassInfo_, allocate$Bundles$1);
	return class$;
}

$Class* Bundles$1::class$ = nullptr;

		} // resources
	} // util
} // sun