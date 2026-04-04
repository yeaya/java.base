#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef.h>
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
using $Predicate = ::java::util::function::Predicate;
using $WhileOps$UnorderedWhileSpliterator = ::java::util::stream::WhileOps$UnorderedWhileSpliterator;

namespace java {
	namespace util {
		namespace stream {

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
	$WhileOps$UnorderedWhileSpliterator::init$(s, parent);
	$set(this, p, $nc(parent)->p);
}

void WhileOps$UnorderedWhileSpliterator$OfRef::accept(Object$* t) {
	this->count = (this->count + 1) & $WhileOps$UnorderedWhileSpliterator::CANCEL_CHECK_COUNT;
	$set(this, t, t);
}

WhileOps$UnorderedWhileSpliterator$OfRef::WhileOps$UnorderedWhileSpliterator$OfRef() {
}

$Class* WhileOps$UnorderedWhileSpliterator$OfRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<-TT;>;", $FINAL, $field(WhileOps$UnorderedWhileSpliterator$OfRef, p)},
		{"t", "Ljava/lang/Object;", "TT;", 0, $field(WhileOps$UnorderedWhileSpliterator$OfRef, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/Spliterator;ZLjava/util/function/Predicate;)V", "(Ljava/util/Spliterator<TT;>;ZLjava/util/function/Predicate<-TT;>;)V", 0, $method(WhileOps$UnorderedWhileSpliterator$OfRef, init$, void, $Spliterator*, bool, $Predicate*)},
		{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef;)V", "(Ljava/util/Spliterator<TT;>;Ljava/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef<TT;>;)V", 0, $method(WhileOps$UnorderedWhileSpliterator$OfRef, init$, void, $Spliterator*, WhileOps$UnorderedWhileSpliterator$OfRef*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(WhileOps$UnorderedWhileSpliterator$OfRef, accept, void, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.WhileOps$UnorderedWhileSpliterator", "java.util.stream.WhileOps", "UnorderedWhileSpliterator", $STATIC | $ABSTRACT},
		{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "java.util.stream.WhileOps$UnorderedWhileSpliterator", "OfRef", $STATIC | $ABSTRACT},
		{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef$Dropping", "java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "Dropping", $STATIC | $FINAL},
		{"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef$Taking", "java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef", "Taking", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef",
		"java.util.stream.WhileOps$UnorderedWhileSpliterator",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/WhileOps$UnorderedWhileSpliterator<TT;Ljava/util/Spliterator<TT;>;>;Ljava/util/function/Consumer<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.WhileOps"
	};
	$loadClass(WhileOps$UnorderedWhileSpliterator$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WhileOps$UnorderedWhileSpliterator$OfRef));
	});
	return class$;
}

$Class* WhileOps$UnorderedWhileSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java