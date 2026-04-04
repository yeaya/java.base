#include <java/util/ImmutableCollections.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/ImmutableCollections$List12.h>
#include <java/util/ImmutableCollections$ListN.h>
#include <java/util/ImmutableCollections$MapN.h>
#include <java/util/ImmutableCollections$SetN.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

#undef EMPTY
#undef EMPTY_LIST
#undef EMPTY_LIST_NULLS
#undef EMPTY_MAP
#undef EMPTY_SET
#undef EXPAND_FACTOR
#undef REVERSE
#undef SALT32L

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $ImmutableCollections$List12 = ::java::util::ImmutableCollections$List12;
using $ImmutableCollections$ListN = ::java::util::ImmutableCollections$ListN;
using $ImmutableCollections$MapN = ::java::util::ImmutableCollections$MapN;
using $ImmutableCollections$SetN = ::java::util::ImmutableCollections$SetN;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace util {

bool ImmutableCollections::$assertionsDisabled = false;
int64_t ImmutableCollections::SALT32L = 0;
bool ImmutableCollections::REVERSE = false;
$ObjectArray* ImmutableCollections::archivedObjects = nullptr;
$Object* ImmutableCollections::EMPTY = nullptr;
$ImmutableCollections$ListN* ImmutableCollections::EMPTY_LIST = nullptr;
$ImmutableCollections$ListN* ImmutableCollections::EMPTY_LIST_NULLS = nullptr;
$ImmutableCollections$SetN* ImmutableCollections::EMPTY_SET = nullptr;
$ImmutableCollections$MapN* ImmutableCollections::EMPTY_MAP = nullptr;

void ImmutableCollections::init$() {
}

$UnsupportedOperationException* ImmutableCollections::uoe() {
	$init(ImmutableCollections);
	return $new($UnsupportedOperationException);
}

$List* ImmutableCollections::listCopy($Collection* coll) {
	$init(ImmutableCollections);
	if ($instanceOf($ImmutableCollections$List12, coll) || ($instanceOf($ImmutableCollections$ListN, coll) && !$cast($ImmutableCollections$ListN, coll)->allowNulls)) {
		return $cast($List, coll);
	} else {
		return $List::of($($nc(coll)->toArray()));
	}
}

$List* ImmutableCollections::listFromArray($ObjectArray* input) {
	$init(ImmutableCollections);
	$var($ObjectArray, tmp, $new($ObjectArray, $nc(input)->length));
	for (int32_t i = 0; i < input->length; ++i) {
		tmp->set(i, $Objects::requireNonNull(input->get(i)));
	}
	return $new($ImmutableCollections$ListN, tmp, false);
}

$List* ImmutableCollections::listFromTrustedArray($ObjectArray* input) {
	$init(ImmutableCollections);
	$useLocalObjectStack();
	if (!ImmutableCollections::$assertionsDisabled && !($nc($of(input))->getClass() == $getClass($ObjectArray))) {
		$throwNew($AssertionError);
	}
	{
		$var($ObjectArray, arr$, input);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				$Objects::requireNonNull(o);
			}
		}
	}
	$var($List, var$0, nullptr);
	switch ($nc(input)->length) {
	case 0:
		$assign(var$0, $cast($List, ImmutableCollections::EMPTY_LIST));
		break;
	case 1:
		$assign(var$0, $cast($List, $new($ImmutableCollections$List12, input->get(0))));
		break;
	case 2:
		$assign(var$0, $cast($List, $new($ImmutableCollections$List12, input->get(0), input->get(1))));
		break;
	default:
		$assign(var$0, $cast($List, $new($ImmutableCollections$ListN, input, false)));
		break;
	}
	return var$0;
}

$List* ImmutableCollections::listFromTrustedArrayNullsAllowed($ObjectArray* input) {
	$init(ImmutableCollections);
	if (!ImmutableCollections::$assertionsDisabled && !($nc($of(input))->getClass() == $getClass($ObjectArray))) {
		$throwNew($AssertionError);
	}
	if ($nc(input)->length == 0) {
		return $cast($List, ImmutableCollections::EMPTY_LIST_NULLS);
	} else {
		return $new($ImmutableCollections$ListN, input, true);
	}
}

void ImmutableCollections::clinit$($Class* clazz) {
	$useLocalObjectStack();
	ImmutableCollections::$assertionsDisabled = !ImmutableCollections::class$->desiredAssertionStatus();
	{
		int64_t color = (int64_t)0x243f6a8885a308d3;
		int64_t seed = $CDS::getRandomSeedForDumping();
		if (seed == 0) {
			seed = $System::nanoTime();
		}
		ImmutableCollections::SALT32L = (int32_t)((color * seed) >> 16) & (int64_t)0xffffffff;
		ImmutableCollections::REVERSE = (ImmutableCollections::SALT32L & 1) == 0;
	}
	{
		$CDS::initializeFromArchive(ImmutableCollections::class$);
		if (ImmutableCollections::archivedObjects == nullptr) {
			$assignStatic(ImmutableCollections::EMPTY, $new($Object));
			$assignStatic(ImmutableCollections::EMPTY_LIST, $new($ImmutableCollections$ListN, $$new($ObjectArray, 0), false));
			$assignStatic(ImmutableCollections::EMPTY_LIST_NULLS, $new($ImmutableCollections$ListN, $$new($ObjectArray, 0), true));
			$assignStatic(ImmutableCollections::EMPTY_SET, $new($ImmutableCollections$SetN, $$new($ObjectArray, 0)));
			$assignStatic(ImmutableCollections::EMPTY_MAP, $new($ImmutableCollections$MapN, $$new($ObjectArray, 0)));
			$assignStatic(ImmutableCollections::archivedObjects, $new($ObjectArray, {
				ImmutableCollections::EMPTY,
				ImmutableCollections::EMPTY_LIST,
				ImmutableCollections::EMPTY_LIST_NULLS,
				ImmutableCollections::EMPTY_SET,
				ImmutableCollections::EMPTY_MAP
			}));
		} else {
			$assignStatic(ImmutableCollections::EMPTY, ImmutableCollections::archivedObjects->get(0));
			$assignStatic(ImmutableCollections::EMPTY_LIST, $cast($ImmutableCollections$ListN, ImmutableCollections::archivedObjects->get(1)));
			$assignStatic(ImmutableCollections::EMPTY_LIST_NULLS, $cast($ImmutableCollections$ListN, ImmutableCollections::archivedObjects->get(2)));
			$assignStatic(ImmutableCollections::EMPTY_SET, $cast($ImmutableCollections$SetN, ImmutableCollections::archivedObjects->get(3)));
			$assignStatic(ImmutableCollections::EMPTY_MAP, $cast($ImmutableCollections$MapN, ImmutableCollections::archivedObjects->get(4)));
		}
	}
}

ImmutableCollections::ImmutableCollections() {
}

$Class* ImmutableCollections::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ImmutableCollections, $assertionsDisabled)},
		{"SALT32L", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImmutableCollections, SALT32L)},
		{"REVERSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImmutableCollections, REVERSE)},
		{"archivedObjects", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(ImmutableCollections, archivedObjects)},
		{"EMPTY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ImmutableCollections, EMPTY)},
		{"EMPTY_LIST", "Ljava/util/ImmutableCollections$ListN;", "Ljava/util/ImmutableCollections$ListN<*>;", $STATIC | $FINAL, $staticField(ImmutableCollections, EMPTY_LIST)},
		{"EMPTY_LIST_NULLS", "Ljava/util/ImmutableCollections$ListN;", "Ljava/util/ImmutableCollections$ListN<*>;", $STATIC | $FINAL, $staticField(ImmutableCollections, EMPTY_LIST_NULLS)},
		{"EMPTY_SET", "Ljava/util/ImmutableCollections$SetN;", "Ljava/util/ImmutableCollections$SetN<*>;", $STATIC | $FINAL, $staticField(ImmutableCollections, EMPTY_SET)},
		{"EMPTY_MAP", "Ljava/util/ImmutableCollections$MapN;", "Ljava/util/ImmutableCollections$MapN<**>;", $STATIC | $FINAL, $staticField(ImmutableCollections, EMPTY_MAP)},
		{"EXPAND_FACTOR", "I", nullptr, $STATIC | $FINAL, $constField(ImmutableCollections, EXPAND_FACTOR)},
		{}
	};
	$CompoundAttribute listFromArraymethodAnnotations$$[] = {
		{"Ljava/lang/SafeVarargs;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ImmutableCollections, init$, void)},
		{"listCopy", "(Ljava/util/Collection;)Ljava/util/List;", "<E:Ljava/lang/Object;>(Ljava/util/Collection<+TE;>;)Ljava/util/List<TE;>;", $STATIC, $staticMethod(ImmutableCollections, listCopy, $List*, $Collection*)},
		{"listFromArray", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([TE;)Ljava/util/List<TE;>;", $STATIC | $TRANSIENT, $staticMethod(ImmutableCollections, listFromArray, $List*, $ObjectArray*), nullptr, nullptr, listFromArraymethodAnnotations$$},
		{"listFromTrustedArray", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $STATIC | $TRANSIENT, $staticMethod(ImmutableCollections, listFromTrustedArray, $List*, $ObjectArray*)},
		{"listFromTrustedArrayNullsAllowed", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $STATIC | $TRANSIENT, $staticMethod(ImmutableCollections, listFromTrustedArrayNullsAllowed, $List*, $ObjectArray*)},
		{"uoe", "()Ljava/lang/UnsupportedOperationException;", nullptr, $STATIC, $staticMethod(ImmutableCollections, uoe, $UnsupportedOperationException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ImmutableCollections$MapN", "java.util.ImmutableCollections", "MapN", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$Map1", "java.util.ImmutableCollections", "Map1", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$AbstractImmutableMap", "java.util.ImmutableCollections", "AbstractImmutableMap", $STATIC | $ABSTRACT},
		{"java.util.ImmutableCollections$SetN", "java.util.ImmutableCollections", "SetN", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$Set12", "java.util.ImmutableCollections", "Set12", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$AbstractImmutableSet", "java.util.ImmutableCollections", "AbstractImmutableSet", $STATIC | $ABSTRACT},
		{"java.util.ImmutableCollections$ListN", "java.util.ImmutableCollections", "ListN", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$List12", "java.util.ImmutableCollections", "List12", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$SubList", "java.util.ImmutableCollections", "SubList", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$ListItr", "java.util.ImmutableCollections", "ListItr", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$AbstractImmutableList", "java.util.ImmutableCollections", "AbstractImmutableList", $STATIC | $ABSTRACT},
		{"java.util.ImmutableCollections$AbstractImmutableCollection", "java.util.ImmutableCollections", "AbstractImmutableCollection", $STATIC | $ABSTRACT},
		{"java.util.ImmutableCollections$Access", "java.util.ImmutableCollections", "Access", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ImmutableCollections",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.ImmutableCollections$MapN,java.util.ImmutableCollections$MapN$MapNIterator,java.util.ImmutableCollections$MapN$1,java.util.ImmutableCollections$Map1,java.util.ImmutableCollections$AbstractImmutableMap,java.util.ImmutableCollections$SetN,java.util.ImmutableCollections$SetN$SetNIterator,java.util.ImmutableCollections$Set12,java.util.ImmutableCollections$Set12$1,java.util.ImmutableCollections$AbstractImmutableSet,java.util.ImmutableCollections$ListN,java.util.ImmutableCollections$List12,java.util.ImmutableCollections$SubList,java.util.ImmutableCollections$ListItr,java.util.ImmutableCollections$AbstractImmutableList,java.util.ImmutableCollections$AbstractImmutableCollection,java.util.ImmutableCollections$Access,java.util.ImmutableCollections$Access$1"
	};
	$loadClass(ImmutableCollections, name, initialize, &classInfo$$, ImmutableCollections::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ImmutableCollections);
	});
	return class$;
}

$Class* ImmutableCollections::class$ = nullptr;

	} // util
} // java