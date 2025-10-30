#include <java/util/stream/SortedOps$RefSortingSink.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractRefSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

#undef BAD_SIZE
#undef MAX_ARRAY_SIZE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ArrayList = ::java::util::ArrayList;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;
using $Nodes = ::java::util::stream::Nodes;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;
using $SortedOps = ::java::util::stream::SortedOps;
using $SortedOps$AbstractRefSortingSink = ::java::util::stream::SortedOps$AbstractRefSortingSink;

namespace java {
	namespace util {
		namespace stream {

class SortedOps$RefSortingSink$$Lambda$accept : public $Consumer {
	$class(SortedOps$RefSortingSink$$Lambda$accept, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Consumer* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->accept(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SortedOps$RefSortingSink$$Lambda$accept>());
	}
	$Consumer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SortedOps$RefSortingSink$$Lambda$accept::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(SortedOps$RefSortingSink$$Lambda$accept, inst$)},
	{}
};
$MethodInfo SortedOps$RefSortingSink$$Lambda$accept::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(SortedOps$RefSortingSink$$Lambda$accept::*)($Consumer*)>(&SortedOps$RefSortingSink$$Lambda$accept::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SortedOps$RefSortingSink$$Lambda$accept::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.stream.SortedOps$RefSortingSink$$Lambda$accept",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* SortedOps$RefSortingSink$$Lambda$accept::load$($String* name, bool initialize) {
	$loadClass(SortedOps$RefSortingSink$$Lambda$accept, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SortedOps$RefSortingSink$$Lambda$accept::class$ = nullptr;

$FieldInfo _SortedOps$RefSortingSink_FieldInfo_[] = {
	{"list", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<TT;>;", $PRIVATE, $field(SortedOps$RefSortingSink, list)},
	{}
};

$MethodInfo _SortedOps$RefSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;Ljava/util/Comparator;)V", "(Ljava/util/stream/Sink<-TT;>;Ljava/util/Comparator<-TT;>;)V", 0, $method(static_cast<void(SortedOps$RefSortingSink::*)($Sink*,$Comparator*)>(&SortedOps$RefSortingSink::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SortedOps$RefSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$RefSortingSink", "java.util.stream.SortedOps", "RefSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractRefSortingSink", "java.util.stream.SortedOps", "AbstractRefSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$RefSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$RefSortingSink",
	"java.util.stream.SortedOps$AbstractRefSortingSink",
	nullptr,
	_SortedOps$RefSortingSink_FieldInfo_,
	_SortedOps$RefSortingSink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/SortedOps$AbstractRefSortingSink<TT;>;",
	nullptr,
	_SortedOps$RefSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$RefSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$RefSortingSink));
}

void SortedOps$RefSortingSink::init$($Sink* sink, $Comparator* comparator) {
	$SortedOps$AbstractRefSortingSink::init$(sink, comparator);
}

void SortedOps$RefSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, list, (size >= 0) ? $new($ArrayList, (int32_t)size) : $new($ArrayList));
}

void SortedOps$RefSortingSink::end() {
	$useLocalCurrentObjectStackCache();
	$nc(this->list)->sort(this->comparator);
	$nc(this->downstream)->begin($nc(this->list)->size());
	if (!this->cancellationRequestedCalled) {
		$nc(this->list)->forEach(static_cast<$Consumer*>($$new(SortedOps$RefSortingSink$$Lambda$accept, static_cast<$Sink*>($nc(this->downstream)))));
	} else {
		{
			$var($Iterator, i$, $nc(this->list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, t, i$->next());
				{
					if ($nc(this->downstream)->cancellationRequested()) {
						break;
					}
					$nc(this->downstream)->accept(t);
				}
			}
		}
	}
	$nc(this->downstream)->end();
	$set(this, list, nullptr);
}

void SortedOps$RefSortingSink::accept(Object$* t) {
	$nc(this->list)->add(t);
}

SortedOps$RefSortingSink::SortedOps$RefSortingSink() {
}

$Class* SortedOps$RefSortingSink::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SortedOps$RefSortingSink$$Lambda$accept::classInfo$.name)) {
			return SortedOps$RefSortingSink$$Lambda$accept::load$(name, initialize);
		}
	}
	$loadClass(SortedOps$RefSortingSink, name, initialize, &_SortedOps$RefSortingSink_ClassInfo_, allocate$SortedOps$RefSortingSink);
	return class$;
}

$Class* SortedOps$RefSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java