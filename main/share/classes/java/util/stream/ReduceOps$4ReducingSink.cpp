#include <java/util/stream/ReduceOps$4ReducingSink.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Supplier = ::java::util::function::Supplier;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;

namespace java {
	namespace util {
		namespace stream {

$Object* ReduceOps$4ReducingSink::get() {
	 return this->$ReduceOps$Box::get();
}

int32_t ReduceOps$4ReducingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$4ReducingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$4ReducingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$4ReducingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$4ReducingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$4ReducingSink::init$($Supplier* val$seedFactory, $BiConsumer* val$accumulator, $BiConsumer* val$reducer) {
	$set(this, val$seedFactory, val$seedFactory);
	$set(this, val$accumulator, val$accumulator);
	$set(this, val$reducer, val$reducer);
	$ReduceOps$Box::init$();
}

void ReduceOps$4ReducingSink::begin(int64_t size) {
	$set(this, state, $nc(this->val$seedFactory)->get());
}

void ReduceOps$4ReducingSink::accept(Object$* t) {
	$nc(this->val$accumulator)->accept(this->state, t);
}

void ReduceOps$4ReducingSink::combine(ReduceOps$4ReducingSink* other) {
	$nc(this->val$reducer)->accept(this->state, $nc(other)->state);
}

void ReduceOps$4ReducingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$4ReducingSink, other));
}

ReduceOps$4ReducingSink::ReduceOps$4ReducingSink() {
}

$Class* ReduceOps$4ReducingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$reducer", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$4ReducingSink, val$reducer)},
		{"val$accumulator", "Ljava/util/function/BiConsumer;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$4ReducingSink, val$accumulator)},
		{"val$seedFactory", "Ljava/util/function/Supplier;", nullptr, $FINAL | $SYNTHETIC, $field(ReduceOps$4ReducingSink, val$seedFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)V", "()V", 0, $method(ReduceOps$4ReducingSink, init$, void, $Supplier*, $BiConsumer*, $BiConsumer*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(ReduceOps$4ReducingSink, accept, void, Object$*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$4ReducingSink, begin, void, int64_t)},
		{"combine", "(Ljava/util/stream/ReduceOps$4ReducingSink;)V", nullptr, $PUBLIC, $virtualMethod(ReduceOps$4ReducingSink, combine, void, ReduceOps$4ReducingSink*)},
		{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ReduceOps$4ReducingSink, combine, void, $ReduceOps$AccumulatingSink*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.stream.ReduceOps",
		"makeRef",
		"(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)Ljava/util/stream/TerminalOp;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.ReduceOps$4ReducingSink", nullptr, "ReducingSink", 0},
		{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.stream.ReduceOps$4ReducingSink",
		"java.util.stream.ReduceOps$Box",
		"java.util.stream.ReduceOps$AccumulatingSink",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/ReduceOps$Box<TR;>;Ljava/util/stream/ReduceOps$AccumulatingSink<TT;TR;Ljava/util/stream/ReduceOps$4ReducingSink;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.ReduceOps"
	};
	$loadClass(ReduceOps$4ReducingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReduceOps$4ReducingSink));
	});
	return class$;
}

$Class* ReduceOps$4ReducingSink::class$ = nullptr;

		} // stream
	} // util
} // java