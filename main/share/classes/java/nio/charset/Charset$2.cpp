#include <java/nio/charset/Charset$2.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/spi/CharsetProvider.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetProvider = ::java::nio::charset::spi::CharsetProvider;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace charset {

void Charset$2::init$($String* val$charsetName) {
	$set(this, val$charsetName, val$charsetName);
}

$Object* Charset$2::run() {
	$useLocalObjectStack();
	$var($Iterator, i, $Charset::providers());
	for (; $nc(i)->hasNext();) {
		$var($CharsetProvider, cp, $cast($CharsetProvider, i->next()));
		$var($Charset, cs, $nc(cp)->charsetForName(this->val$charsetName));
		if (cs != nullptr) {
			return cs;
		}
	}
	return nullptr;
}

Charset$2::Charset$2() {
}

$Class* Charset$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$charsetName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Charset$2, val$charsetName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Charset$2, init$, void, $String*)},
		{"run", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC, $virtualMethod(Charset$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.charset.Charset",
		"lookupViaProviders",
		"(Ljava/lang/String;)Ljava/nio/charset/Charset;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.charset.Charset$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.charset.Charset$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/charset/Charset;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.charset.Charset"
	};
	$loadClass(Charset$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Charset$2);
	});
	return class$;
}

$Class* Charset$2::class$ = nullptr;

		} // charset
	} // nio
} // java