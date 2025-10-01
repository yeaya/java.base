#include <jdk/internal/loader/URLClassPath$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/loader/URLClassPath$Loader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$Loader = ::jdk::internal::loader::URLClassPath$Loader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$1, this$0)},
	{"val$check", "Z", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$1, val$check)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$1, val$name)},
	{"index", "I", nullptr, $PRIVATE, $field(URLClassPath$1, index)},
	{"url", "Ljava/net/URL;", nullptr, $PRIVATE, $field(URLClassPath$1, url)},
	{}
};

$MethodInfo _URLClassPath$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(URLClassPath$1::*)($URLClassPath*,$String*,bool)>(&URLClassPath$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(URLClassPath$1::*)()>(&URLClassPath$1::next))},
	{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassPath$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath",
	"findResources",
	"(Ljava/lang/String;Z)Ljava/util/Enumeration;"
};

$InnerClassInfo _URLClassPath$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_URLClassPath$1_FieldInfo_,
	_URLClassPath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
	&_URLClassPath$1_EnclosingMethodInfo_,
	_URLClassPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$1($Class* clazz) {
	return $of($alloc(URLClassPath$1));
}

void URLClassPath$1::init$($URLClassPath* this$0, $String* val$name, bool val$check) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	this->val$check = val$check;
	this->index = 0;
	$set(this, url, nullptr);
}

bool URLClassPath$1::next() {
	if (this->url != nullptr) {
		return true;
	} else {
		$var($URLClassPath$Loader, loader, nullptr);
		while (($assign(loader, this->this$0->getLoader(this->index++))) != nullptr) {
			$set(this, url, $nc(loader)->findResource(this->val$name, this->val$check));
			if (this->url != nullptr) {
				return true;
			}
		}
		return false;
	}
}

bool URLClassPath$1::hasMoreElements() {
	return next();
}

$Object* URLClassPath$1::nextElement() {
	if (!next()) {
		$throwNew($NoSuchElementException);
	}
	$var($URL, u, this->url);
	$set(this, url, nullptr);
	return $of(u);
}

URLClassPath$1::URLClassPath$1() {
}

$Class* URLClassPath$1::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$1, name, initialize, &_URLClassPath$1_ClassInfo_, allocate$URLClassPath$1);
	return class$;
}

$Class* URLClassPath$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk