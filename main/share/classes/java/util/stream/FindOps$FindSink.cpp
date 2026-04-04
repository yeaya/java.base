#include <java/util/stream/FindOps$FindSink.h>
#include <java/util/stream/FindOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

void FindOps$FindSink::init$() {
}

void FindOps$FindSink::accept(Object$* value) {
	if (!this->hasValue) {
		this->hasValue = true;
		$set(this, value, value);
	}
}

bool FindOps$FindSink::cancellationRequested() {
	return this->hasValue;
}

FindOps$FindSink::FindOps$FindSink() {
}

$Class* FindOps$FindSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hasValue", "Z", nullptr, 0, $field(FindOps$FindSink, hasValue)},
		{"value", "Ljava/lang/Object;", "TT;", 0, $field(FindOps$FindSink, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FindOps$FindSink, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(FindOps$FindSink, accept, void, Object$*)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC, $virtualMethod(FindOps$FindSink, cancellationRequested, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.FindOps$FindSink", "java.util.stream.FindOps", "FindSink", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.FindOps$FindSink$OfDouble", "java.util.stream.FindOps$FindSink", "OfDouble", $STATIC | $FINAL},
		{"java.util.stream.FindOps$FindSink$OfLong", "java.util.stream.FindOps$FindSink", "OfLong", $STATIC | $FINAL},
		{"java.util.stream.FindOps$FindSink$OfInt", "java.util.stream.FindOps$FindSink", "OfInt", $STATIC | $FINAL},
		{"java.util.stream.FindOps$FindSink$OfRef", "java.util.stream.FindOps$FindSink", "OfRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.FindOps$FindSink",
		"java.lang.Object",
		"java.util.stream.TerminalSink",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;O:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/TerminalSink<TT;TO;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.FindOps"
	};
	$loadClass(FindOps$FindSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FindOps$FindSink));
	});
	return class$;
}

$Class* FindOps$FindSink::class$ = nullptr;

		} // stream
	} // util
} // java