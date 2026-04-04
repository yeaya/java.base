#include <jdk/internal/loader/BuiltinClassLoader$2.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;

namespace jdk {
	namespace internal {
		namespace loader {

void BuiltinClassLoader$2::init$($BuiltinClassLoader* this$0, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* BuiltinClassLoader$2::run() {
	$useLocalObjectStack();
	$var($List, result, nullptr);
	{
		$var($Iterator, i$, $$nc($nc(this->this$0->nameToModule)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleReference, mref, $cast($ModuleReference, i$->next()));
			{
				$var($URI, u, $cast($URI, $$nc($$nc(this->this$0->moduleReaderFor(mref))->find(this->val$name))->orElse(nullptr)));
				if (u != nullptr) {
					try {
						if (result == nullptr) {
							$assign(result, $new($ArrayList));
						}
						$nc(result)->add($(u->toURL()));
					} catch ($MalformedURLException& e) {
					} catch ($IllegalArgumentException& e) {
					}
				}
			}
		}
	}
	return (result != nullptr) ? result : $Collections::emptyList();
}

BuiltinClassLoader$2::BuiltinClassLoader$2() {
}

$Class* BuiltinClassLoader$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$2, this$0)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$2, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/lang/String;)V", nullptr, 0, $method(BuiltinClassLoader$2, init$, void, $BuiltinClassLoader*, $String*)},
		{"run", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/URL;>;", $PUBLIC, $virtualMethod(BuiltinClassLoader$2, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BuiltinClassLoader",
		"findMiscResource",
		"(Ljava/lang/String;)Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BuiltinClassLoader$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BuiltinClassLoader$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/util/List<Ljava/net/URL;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BuiltinClassLoader"
	};
	$loadClass(BuiltinClassLoader$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BuiltinClassLoader$2);
	});
	return class$;
}

$Class* BuiltinClassLoader$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk