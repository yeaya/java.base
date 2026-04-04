#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void Util::init$() {
}

$List* Util::add($List* list, Object$* element) {
	$var($List, newList, list == nullptr ? $cast($List, $new($ArrayList, 1)) : list);
	$nc(newList)->add(element);
	return newList;
}

$List* Util::asArrayList(int32_t length) {
	$var($List, list, $new($ArrayList, length));
	for (int32_t i = 0; i < length; ++i) {
		list->add(nullptr);
	}
	return list;
}

$List* Util::asArrayList($ObjectArray* array) {
	$useLocalObjectStack();
	if (array == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, list, $new($ArrayList, $nc(array)->length));
	{
		$var($ObjectArray, arr$, array);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, t, arr$->get(i$));
			{
				list->add(t);
			}
		}
	}
	return list;
}

$List* Util::asArrayList($bytes* byteArray) {
	$useLocalObjectStack();
	if (byteArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, byteList, $new($ArrayList, $nc(byteArray)->length));
	{
		$var($bytes, arr$, byteArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int8_t b = arr$->get(i$);
			{
				byteList->add($($Byte::valueOf(b)));
			}
		}
	}
	return byteList;
}

$List* Util::asArrayList($booleans* booleanArray) {
	$useLocalObjectStack();
	if (booleanArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, booleanList, $new($ArrayList, $nc(booleanArray)->length));
	{
		$var($booleans, arr$, booleanArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			bool b = arr$->get(i$);
			{
				booleanList->add($($Boolean::valueOf(b)));
			}
		}
	}
	return booleanList;
}

$List* Util::asArrayList($shorts* shortArray) {
	$useLocalObjectStack();
	if (shortArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, shortList, $new($ArrayList, $nc(shortArray)->length));
	{
		$var($shorts, arr$, shortArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int16_t s = arr$->get(i$);
			{
				shortList->add($($Short::valueOf(s)));
			}
		}
	}
	return shortList;
}

$List* Util::asArrayList($chars* charArray) {
	$useLocalObjectStack();
	if (charArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, charList, $new($ArrayList, $nc(charArray)->length));
	{
		$var($chars, arr$, charArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			char16_t c = arr$->get(i$);
			{
				charList->add($($Character::valueOf(c)));
			}
		}
	}
	return charList;
}

$List* Util::asArrayList($ints* intArray) {
	$useLocalObjectStack();
	if (intArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, intList, $new($ArrayList, $nc(intArray)->length));
	{
		$var($ints, arr$, intArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				intList->add($($Integer::valueOf(i)));
			}
		}
	}
	return intList;
}

$List* Util::asArrayList($floats* floatArray) {
	$useLocalObjectStack();
	if (floatArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, floatList, $new($ArrayList, $nc(floatArray)->length));
	{
		$var($floats, arr$, floatArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			float f = arr$->get(i$);
			{
				floatList->add($($Float::valueOf(f)));
			}
		}
	}
	return floatList;
}

$List* Util::asArrayList($longs* longArray) {
	$useLocalObjectStack();
	if (longArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, longList, $new($ArrayList, $nc(longArray)->length));
	{
		$var($longs, arr$, longArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int64_t l = arr$->get(i$);
			{
				longList->add($($Long::valueOf(l)));
			}
		}
	}
	return longList;
}

$List* Util::asArrayList($doubles* doubleArray) {
	$useLocalObjectStack();
	if (doubleArray == nullptr) {
		return $new($ArrayList);
	}
	$var($ArrayList, doubleList, $new($ArrayList, $nc(doubleArray)->length));
	{
		$var($doubles, arr$, doubleArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			double d = arr$->get(i$);
			{
				doubleList->add($($Double::valueOf(d)));
			}
		}
	}
	return doubleList;
}

$List* Util::asArrayList(int32_t length, $ObjectArray* array) {
	$var($List, list, $new($ArrayList, length));
	for (int32_t i = 0; i < length; ++i) {
		list->add($nc(array)->get(i));
	}
	return list;
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Util, init$, void)},
		{"add", "(Ljava/util/List;Ljava/lang/Object;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/List<TT;>;TT;)Ljava/util/List<TT;>;", $STATIC, $staticMethod(Util, add, $List*, $List*, Object$*)},
		{"asArrayList", "(I)Ljava/util/List;", "<T:Ljava/lang/Object;>(I)Ljava/util/List<TT;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, int32_t)},
		{"asArrayList", "([Ljava/lang/Object;)Ljava/util/List;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/List<TT;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $ObjectArray*)},
		{"asArrayList", "([B)Ljava/util/List;", "([B)Ljava/util/List<Ljava/lang/Byte;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $bytes*)},
		{"asArrayList", "([Z)Ljava/util/List;", "([Z)Ljava/util/List<Ljava/lang/Boolean;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $booleans*)},
		{"asArrayList", "([S)Ljava/util/List;", "([S)Ljava/util/List<Ljava/lang/Short;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $shorts*)},
		{"asArrayList", "([C)Ljava/util/List;", "([C)Ljava/util/List<Ljava/lang/Character;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $chars*)},
		{"asArrayList", "([I)Ljava/util/List;", "([I)Ljava/util/List<Ljava/lang/Integer;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $ints*)},
		{"asArrayList", "([F)Ljava/util/List;", "([F)Ljava/util/List<Ljava/lang/Float;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $floats*)},
		{"asArrayList", "([J)Ljava/util/List;", "([J)Ljava/util/List<Ljava/lang/Long;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $longs*)},
		{"asArrayList", "([D)Ljava/util/List;", "([D)Ljava/util/List<Ljava/lang/Double;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, $doubles*)},
		{"asArrayList", "(I[Ljava/lang/Object;)Ljava/util/List;", "<T:Ljava/lang/Object;>(I[TT;)Ljava/util/List<TT;>;", $STATIC, $staticMethod(Util, asArrayList, $List*, int32_t, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.Util",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Util, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util);
	});
	return class$;
}

$Class* Util::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk