#include <java/util/stream/ReduceOps$4.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$4ReducingSink.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$ReduceOp.h>
#include <java/util/stream/ReduceOps.h>
#include <java/util/stream/StreamShape.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$4ReducingSink = ::java::util::stream::ReduceOps$4ReducingSink;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$ReduceOp = ::java::util::stream::ReduceOps$ReduceOp;
using $StreamShape = ::java::util::stream::StreamShape;

namespace java {
	namespace util {
		namespace stream {

void ReduceOps$4::init$($StreamShape* shape, $BiConsumer* val$reducer, $BiConsumer* val$accumulator, $Supplier* val$seedFactory) {
	$set(this, val$reducer, val$reducer);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$seedFactory, val$seedFactory);
	$ReduceOps$ReduceOp::init$(shape);
}

$ReduceOps$AccumulatingSink* ReduceOps$4::makeSink() {
	return $new($ReduceOps$4ReducingSink, this->val$seedFactory, this->val$accumulator, this->val$reducer);
}

ReduceOps$4::ReduceOps$4() {
}

$Class* ReduceOps$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$seedFactory", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$4, val$seedFactory)},
		{"val$accumulator", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$4, val$accumulator)},
		{"val$reducer", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$4, val$reducer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamShape;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;Ljava/util/function/Supplier;)V", nullptr, 0, $method(ReduceOps$4, init$, void, $StreamShape*, $BiConsumer*, $BiConsumer*, $Supplier*)},
		{"makeSink", "()Ljava/util/stream/ReduceOps$4ReducingSink;", nullptr, $PUBLIC, $virtualMethod(ReduceOps$4, makeSink, $ReduceOps$AccumulatingSink*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeRef",
		"(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$4", nullptr, nullptr, 0},
		{"java.util.stream.ReduceOps$ReduceOp", "java.util.stream.ReduceOps", "ReduceOp", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$4ReducingSink", nullptr, "ReducingSink", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$4",
		"java.util.stream.ReduceOps$ReduceOp",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$ReduceOp<TT;TR;Ljava/util/stream/ReduceOps$4ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReduceOps$4);
	});
	return class$;
}

$Class* ReduceOps$4::class$ = nullptr;

		} // stream
	} // util
} // java