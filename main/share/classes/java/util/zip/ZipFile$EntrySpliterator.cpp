#include <java/util/zip/ZipFile$EntrySpliterator.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile$Source.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

#undef DISTINCT
#undef IMMUTABLE
#undef NONNULL
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $ZipFile = ::java::util::zip::ZipFile;

namespace java {
	namespace util {
		namespace zip {

void ZipFile$EntrySpliterator::init$($ZipFile* this$0, int32_t index, int32_t fence, $IntFunction* gen) {
	$set(this, this$0, this$0);
	$Spliterators$AbstractSpliterator::init$((int64_t)fence, (($Spliterator::ORDERED | $Spliterator::DISTINCT) | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL);
	this->index = index;
	this->fence = fence;
	$set(this, gen, gen);
}

bool ZipFile$EntrySpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		$synchronized(this->this$0) {
			this->this$0->ensureOpen();
			$nc(action)->accept($($nc(this->gen)->apply($nc($nc(this->this$0->res)->zsrc)->getEntryPos(this->index++ * 3))));
		}
		return true;
	}
	return false;
}

ZipFile$EntrySpliterator::ZipFile$EntrySpliterator() {
}

$Class* ZipFile$EntrySpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/zip/ZipFile;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFile$EntrySpliterator, this$0)},
		{"index", "I", nullptr, $PRIVATE, $field(ZipFile$EntrySpliterator, index)},
		{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(ZipFile$EntrySpliterator, fence)},
		{"gen", "Ljava/util/function/IntFunction;", "Ljava/util/function/IntFunction<TT;>;", $PRIVATE | $FINAL, $field(ZipFile$EntrySpliterator, gen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipFile;IILjava/util/function/IntFunction;)V", "(IILjava/util/function/IntFunction<TT;>;)V", 0, $method(ZipFile$EntrySpliterator, init$, void, $ZipFile*, int32_t, int32_t, $IntFunction*)},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(ZipFile$EntrySpliterator, tryAdvance, bool, $Consumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipFile$EntrySpliterator", "java.util.zip.ZipFile", "EntrySpliterator", $PRIVATE},
		{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.ZipFile$EntrySpliterator",
		"java.util.Spliterators$AbstractSpliterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/Spliterators$AbstractSpliterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.ZipFile"
	};
	$loadClass(ZipFile$EntrySpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFile$EntrySpliterator);
	});
	return class$;
}

$Class* ZipFile$EntrySpliterator::class$ = nullptr;

		} // zip
	} // util
} // java