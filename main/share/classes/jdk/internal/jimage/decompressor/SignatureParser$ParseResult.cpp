#include <jdk/internal/jimage/decompressor/SignatureParser$ParseResult.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jdk/internal/jimage/decompressor/SignatureParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace jdk {
	namespace internal {
		namespace jimage {
			namespace decompressor {

void SignatureParser$ParseResult::init$() {
	$set(this, types, $new($ArrayList));
}

SignatureParser$ParseResult::SignatureParser$ParseResult() {
}

$Class* SignatureParser$ParseResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"types", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $FINAL, $field(SignatureParser$ParseResult, types)},
		{"formatted", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SignatureParser$ParseResult, formatted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SignatureParser$ParseResult, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jimage.decompressor.SignatureParser$ParseResult", "jdk.internal.jimage.decompressor.SignatureParser", "ParseResult", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.jimage.decompressor.SignatureParser$ParseResult",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jimage.decompressor.SignatureParser"
	};
	$loadClass(SignatureParser$ParseResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SignatureParser$ParseResult);
	});
	return class$;
}

$Class* SignatureParser$ParseResult::class$ = nullptr;

			} // decompressor
		} // jimage
	} // internal
} // jdk