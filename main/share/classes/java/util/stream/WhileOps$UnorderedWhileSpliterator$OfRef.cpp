#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/WhileOps$UnorderedWhileSpliterator.h>
#include <jcpp.h>

#undef CANCEL_CHECK_COUNT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $WhileOps$UnorderedWhileSpliterator = ::java::util::stream::WhileOps$UnorderedWhileSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _WhileOps$UnorderedWhileSpliterator$OfRef_FieldInfo_[] = {
	{"p", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<-TT;>;", $FINAL, $field(WhileOps$UnorderedWhileSpliterator$OfRef, p)},
	{"t", "Ljava/lang/Object;", "TT;", 0, $field(WhileOps$UnorderedWhileSpliterator$OfRef, t)},
	{}
};

$MethodInfo _WhileOps$UnorderedWhileSpliterator$OfRef_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;ZLjava/util/function/Predicate;)V", "(Ljava/util/Spliterator<TT;>;ZLjava/util/function/Predicate<-TT;>;)V", 0, $method(static_cast<void(WhileOps$UnorderedWhileSpliterator$OfRef::*)($Spliterator*,bool,$Predicate*)>(&WhileOps$UnorderedWhileSpliterator$OfRef::init$))},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef;)V", "(Ljava/util/Spliterator<TT;>;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef<TT;>;)V", 0, $method(static_cast<void(WhileOps$UnorderedWhileSpliterator$OfRef::*)($Spliterator*,WhileOps$UnorderedWhileSpliterator$OfRef*)>(&WhileOps$UnorderedWhileSpliterator$OfRef::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WhileOps$UnorderedWhileSpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator", "java.util.stream.WhileOps", "UnorderedWhileSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfRef", $STATIC | $ABSTRACT},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef$Dropping", "java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "Dropping", $STATIC | $FINAL},
	{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef$Taking", "java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "Taking", $STATIC | $FINAL},
	{}
};

$ClassInfo _WhileOps$UnorderedWhileSpliterator$OfRef_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef",
	"java.util.stream.WhileOps$UnorderedWhileSpliterator",
	"java.util.function.Consumer",
	_WhileOps$UnorderedWhileSpliterator$OfRef_FieldInfo_,
	_WhileOps$UnorderedWhileSpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/WhileOps$UnorderedWhileSpliterator<TT;Ljava/util/Spliterator<TT;>;>;Ljava/util/function/Consumer<TT;>;",
	nullptr,
	_WhileOps$UnorderedWhileSpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.WhileOps"
};

$Object* allocate$WhileOps$UnorderedWhileSpliterator$OfRef($Class* clazz) {
	return $of($alloc(WhileOps$UnorderedWhileSpliterator$OfRef));
}

int32_t WhileOps$UnorderedWhileSpliterator$OfRef::hashCode() {
	 return this->$WhileOps$UnorderedWhileSpliterator::hashCode();
}

bool WhileOps$UnorderedWhileSpliterator$OfRef::equals(Object$* obj) {
	 return this->$WhileOps$UnorderedWhileSpliterator::equals(obj);
}

$Object* WhileOps$UnorderedWhileSpliterator$OfRef::clone() {
	 return this->$WhileOps$UnorderedWhileSpliterator::clone();
}

$String* WhileOps$UnorderedWhileSpliterator$OfRef::toString() {
	 return this->$WhileOps$UnorderedWhileSpliterator::toString();
}

void WhileOps$UnorderedWhileSpliterator$OfRef::finalize() {
	this->$WhileOps$UnorderedWhileSpliterator::finalize();
}

void WhileOps$UnorderedWhileSpliterator$OfRef::init$($Spliterator* s, bool noSplitting, $Predicate* p) {
	$WhileOps$UnorderedWhileSpliterator::init$(s, noSplitting);
	$set(this, p, p);
}

void WhileOps$UnorderedWhileSpliterator$OfRef::init$($Spliterator* s, WhileOps$UnorderedWhileSpliterator$OfRef* parent) {
	$WhileOps$UnorderedWhileSpliterator::init$(s, static_cast<$WhileOps$UnorderedWhileSpliterator*>(parent));
	$set(this, p, $nc(parent)->p);
}

void WhileOps$UnorderedWhileSpliterator$OfRef::accept(Object$* t) {
	this->count = (int32_t)((this->count + 1) & (uint32_t)$WhileOps$UnorderedWhileSpliterator::CANCEL_CHECK_COUNT);
	$set(this, t, t);
}

WhileOps$UnorderedWhileSpliterator$OfRef::WhileOps$UnorderedWhileSpliterator$OfRef() {
}

$Class* WhileOps$UnorderedWhileSpliterator$OfRef::load$($String* name, bool initialize) {
	$loadClass(WhileOps$UnorderedWhileSpliterator$OfRef, name, initialize, &_WhileOps$UnorderedWhileSpliterator$OfRef_ClassInfo_, allocate$WhileOps$UnorderedWhileSpliterator$OfRef);
	return class$;
}

$Class* WhileOps$UnorderedWhileSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java