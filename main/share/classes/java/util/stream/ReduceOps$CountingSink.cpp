#include <java/util/stream/ReduceOps$CountingSink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/ReduceOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReduceOps = ::java::util::stream::ReduceOps;
using $ReduceOps$AccumulatingSink = ::java::util::stream::ReduceOps$AccumulatingSink;
using $ReduceOps$Box = ::java::util::stream::ReduceOps$Box;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _ReduceOps$CountingSink_FieldInfo_[] = {
	{"count", "J", nullptr, 0, $field(ReduceOps$CountingSink, count)},
	{}
};

$MethodInfo _ReduceOps$CountingSink_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReduceOps$CountingSink::*)()>(&ReduceOps$CountingSink::init$))},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$CountingSink;)V", "(Ljava/util/stream/ReduceOps$CountingSink<TT;>;)V", $PUBLIC},
	{"combine", "(Ljava/util/stream/ReduceOps$AccumulatingSink;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"get", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReduceOps$CountingSink_InnerClassesInfo_[] = {
	{"java.util.stream.ReduceOps$CountingSink", "java.util.stream.ReduceOps", "CountingSink", $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$Box", "java.util.stream.ReduceOps", "Box", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.ReduceOps$AccumulatingSink", "java.util.stream.ReduceOps", "AccumulatingSink", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.stream.ReduceOps$CountingSink$OfDouble", "java.util.stream.ReduceOps$CountingSink", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.ReduceOps$CountingSink$OfLong", "java.util.stream.ReduceOps$CountingSink", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.ReduceOps$CountingSink$OfInt", "java.util.stream.ReduceOps$CountingSink", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.ReduceOps$CountingSink$OfRef", "java.util.stream.ReduceOps$CountingSink", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _ReduceOps$CountingSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.ReduceOps$CountingSink",
	"java.util.stream.ReduceOps$Box",
	"java.util.stream.ReduceOps$AccumulatingSink",
	_ReduceOps$CountingSink_FieldInfo_,
	_ReduceOps$CountingSink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/ReduceOps$Box<Ljava/lang/Long;>;Ljava/util/stream/ReduceOps$AccumulatingSink<TT;Ljava/lang/Long;Ljava/util/stream/ReduceOps$CountingSink<TT;>;>;",
	nullptr,
	_ReduceOps$CountingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.ReduceOps"
};

$Object* allocate$ReduceOps$CountingSink($Class* clazz) {
	return $of($alloc(ReduceOps$CountingSink));
}

int32_t ReduceOps$CountingSink::hashCode() {
	 return this->$ReduceOps$Box::hashCode();
}

bool ReduceOps$CountingSink::equals(Object$* obj) {
	 return this->$ReduceOps$Box::equals(obj);
}

$Object* ReduceOps$CountingSink::clone() {
	 return this->$ReduceOps$Box::clone();
}

$String* ReduceOps$CountingSink::toString() {
	 return this->$ReduceOps$Box::toString();
}

void ReduceOps$CountingSink::finalize() {
	this->$ReduceOps$Box::finalize();
}

void ReduceOps$CountingSink::init$() {
	$ReduceOps$Box::init$();
}

void ReduceOps$CountingSink::begin(int64_t size) {
	this->count = 0;
}

$Object* ReduceOps$CountingSink::get() {
	return $of($Long::valueOf(this->count));
}

void ReduceOps$CountingSink::combine(ReduceOps$CountingSink* other) {
	this->count += $nc(other)->count;
}

void ReduceOps$CountingSink::combine($ReduceOps$AccumulatingSink* other) {
	this->combine($cast(ReduceOps$CountingSink, other));
}

ReduceOps$CountingSink::ReduceOps$CountingSink() {
}

$Class* ReduceOps$CountingSink::load$($String* name, bool initialize) {
	$loadClass(ReduceOps$CountingSink, name, initialize, &_ReduceOps$CountingSink_ClassInfo_, allocate$ReduceOps$CountingSink);
	return class$;
}

$Class* ReduceOps$CountingSink::class$ = nullptr;

		} // stream
	} // util
} // java