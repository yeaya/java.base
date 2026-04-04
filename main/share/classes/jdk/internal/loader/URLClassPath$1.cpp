#include <jdk/internal/loader/URLClassPath$1.h>
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
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$Loader = ::jdk::internal::loader::URLClassPath$Loader;

namespace jdk {
	namespace internal {
		namespace loader {

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
	return u;
}

URLClassPath$1::URLClassPath$1() {
}

$Class* URLClassPath$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/URLClassPath;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$1, this$0)},
		{"val$check", "Z", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$1, val$check)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$1, val$name)},
		{"index", "I", nullptr, $PRIVATE, $field(URLClassPath$1, index)},
		{"url", "Ljava/net/URL;", nullptr, $PRIVATE, $field(URLClassPath$1, url)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/URLClassPath;Ljava/lang/String;Z)V", nullptr, 0, $method(URLClassPath$1, init$, void, $URLClassPath*, $String*, bool)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(URLClassPath$1, hasMoreElements, bool)},
		{"next", "()Z", nullptr, $PRIVATE, $method(URLClassPath$1, next, bool)},
		{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.URLClassPath",
		"findResources",
		"(Ljava/lang/String;Z)Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.URLClassPath$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.URLClassPath$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.URLClassPath"
	};
	$loadClass(URLClassPath$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassPath$1);
	});
	return class$;
}

$Class* URLClassPath$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk