#include <HashCodeTest.h>
#include <HashCodeTest$Edge.h>
#include <HashCodeTest$Node.h>
#include <java/lang/Enum.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $HashCodeTest$Edge = ::HashCodeTest$Edge;
using $HashCodeTest$Node = ::HashCodeTest$Node;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

void HashCodeTest::init$() {
}

void HashCodeTest::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($List, classes, $new($ArrayList));
	$var($Set, typeVariables, $new($HashSet));
	classes->add($Class::class$);
	$load($Map);
	classes->add($Map::class$);
	classes->add($Enum::class$);
	$load($HashCodeTest$Edge);
	classes->add($HashCodeTest$Edge::class$);
	$load($HashCodeTest$Node);
	classes->add($HashCodeTest$Node::class$);
	{
		$var($Iterator, i$, classes->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* clazz = $cast($Class, i$->next());
			{
				$nc($System::out)->println(clazz);
				{
					$var($TypeVariableArray, arr$, $nc(clazz)->getTypeParameters());
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($TypeVariable, tv, arr$->get(i$));
						{
							int32_t hc = $nc(tv)->hashCode();
							typeVariables->add(tv);
							$System::out->printf("\t%s 0x%x (%d)%n"_s, $$new($ObjectArray, {
								$(tv->getName()),
								$($Integer::valueOf(hc)),
								$($Integer::valueOf(hc))
							}));
						}
					}
				}
			}
		}
	}
	int32_t count = 0;
	{
		$var($Iterator, i$, classes->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* clazz = $cast($Class, i$->next());
			{
				$var($TypeVariableArray, arr$, $nc(clazz)->getTypeParameters());
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($TypeVariable, tv, arr$->get(i$));
					if (!typeVariables->remove(tv)) {
						$throwNew($RuntimeException, $$str({"Type variable "_s, tv, " not found."_s}));
					}
				}
			}
		}
	}
	if (typeVariables->size() != 0) {
		$throwNew($RuntimeException, "Unexpected number of type variables."_s);
	}
}

HashCodeTest::HashCodeTest() {
}

$Class* HashCodeTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HashCodeTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HashCodeTest, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HashCodeTest$Node", "HashCodeTest", "Node", $STATIC | $INTERFACE | $ABSTRACT},
		{"HashCodeTest$Edge", "HashCodeTest", "Edge", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HashCodeTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HashCodeTest$Node,HashCodeTest$Edge"
	};
	$loadClass(HashCodeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HashCodeTest);
	});
	return class$;
}

$Class* HashCodeTest::class$ = nullptr;