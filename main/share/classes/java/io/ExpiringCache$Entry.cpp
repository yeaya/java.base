#include <java/io/ExpiringCache$Entry.h>

#include <java/io/ExpiringCache.h>
#include <jcpp.h>

using $ExpiringCache = ::java::io::ExpiringCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ExpiringCache$Entry_FieldInfo_[] = {
	{"timestamp", "J", nullptr, $PRIVATE, $field(ExpiringCache$Entry, timestamp$)},
	{"val", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExpiringCache$Entry, val$)},
	{}
};

$MethodInfo _ExpiringCache$Entry_MethodInfo_[] = {
	{"<init>", "(JLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(ExpiringCache$Entry::*)(int64_t,$String*)>(&ExpiringCache$Entry::init$))},
	{"setTimestamp", "(J)V", nullptr, 0},
	{"setVal", "(Ljava/lang/String;)V", nullptr, 0},
	{"timestamp", "()J", nullptr, 0},
	{"val", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _ExpiringCache$Entry_InnerClassesInfo_[] = {
	{"java.io.ExpiringCache$Entry", "java.io.ExpiringCache", "Entry", $STATIC},
	{}
};

$ClassInfo _ExpiringCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ExpiringCache$Entry",
	"java.lang.Object",
	nullptr,
	_ExpiringCache$Entry_FieldInfo_,
	_ExpiringCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ExpiringCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ExpiringCache"
};

$Object* allocate$ExpiringCache$Entry($Class* clazz) {
	return $of($alloc(ExpiringCache$Entry));
}

void ExpiringCache$Entry::init$(int64_t timestamp, $String* val) {
	this->timestamp$ = timestamp;
	$set(this, val$, val);
}

int64_t ExpiringCache$Entry::timestamp() {
	return this->timestamp$;
}

void ExpiringCache$Entry::setTimestamp(int64_t timestamp) {
	this->timestamp$ = timestamp;
}

$String* ExpiringCache$Entry::val() {
	return this->val$;
}

void ExpiringCache$Entry::setVal($String* val) {
	$set(this, val$, val);
}

ExpiringCache$Entry::ExpiringCache$Entry() {
}

$Class* ExpiringCache$Entry::load$($String* name, bool initialize) {
	$loadClass(ExpiringCache$Entry, name, initialize, &_ExpiringCache$Entry_ClassInfo_, allocate$ExpiringCache$Entry);
	return class$;
}

$Class* ExpiringCache$Entry::class$ = nullptr;

	} // io
} // java