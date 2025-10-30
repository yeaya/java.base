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

$MethodInfo _ResourceBundle$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ResourceBundle$2::*)()>(&ResourceBundle$2::init$))},
	{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ResourceBundle$2_EnclosingMethodInfo_ = {
	"java.util.ResourceBundle",
	nullptr,
	nullptr
};

$InnerClassInfo _ResourceBundle$2_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResourceBundle$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$2",
	"java.util.ResourceBundle",
	nullptr,
	nullptr,
	_ResourceBundle$2_MethodInfo_,
	nullptr,
	&_ResourceBundle$2_EnclosingMethodInfo_,
	_ResourceBundle$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$2($Class* clazz) {
	return $of($alloc(ResourceBundle$2));
}

void ResourceBundle$2::init$() {
	$ResourceBundle::init$();
}

$Enumeration* ResourceBundle$2::getKeys() {
	return nullptr;
}

$Object* ResourceBundle$2::handleGetObject($String* key) {
	return $of(nullptr);
}

$String* ResourceBundle$2::toString() {
	return "NONEXISTENT_BUNDLE"_s;
}

ResourceBundle$2::ResourceBundle$2() {
}

$Class* ResourceBundle$2::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$2, name, initialize, &_ResourceBundle$2_ClassInfo_, allocate$ResourceBundle$2);
	return class$;
}

$Class* ResourceBundle$2::class$ = nullptr;

	} // util
} // java