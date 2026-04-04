#include <Bug4404588.h>
#include <java/lang/Character$UnicodeBlock.h>
#include <jcpp.h>

#undef SPECIALS

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $Character = ::java::lang::Character;
using $Character$UnicodeBlock = ::java::lang::Character$UnicodeBlock;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Bug4404588::init$() {
	$useLocalObjectStack();
	$init($Character$UnicodeBlock);
	$set(this, charData, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$$new($Character, (char16_t)0xfffe),
			$Character$UnicodeBlock::SPECIALS
		}),
		$$new($ObjectArray, {
			$$new($Character, (char16_t)0xffff),
			$Character$UnicodeBlock::SPECIALS
		})
	}));
}

void Bug4404588::main($StringArray* args) {
	$var(Bug4404588, test, $new(Bug4404588));
	test->run();
}

void Bug4404588::run() {
	$useLocalObjectStack();
	$var($Character, ch, nullptr);
	$var($Character$UnicodeBlock, block, nullptr);
	for (int32_t x = 0; x < $nc(this->charData)->length; ++x) {
		$assign(ch, $cast($Character, $nc(this->charData->get(x))->get(0)));
		$assign(block, $cast($Character$UnicodeBlock, $nc(this->charData->get(x))->get(1)));
		if ($Character$UnicodeBlock::of($nc(ch)->charValue()) != block) {
			$nc($System::err)->println($$str({"Error: block = "_s, block}));
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Character.UnicodeBlock.of("_s);
			var$0->append($($Integer::toHexString(ch->charValue())));
			var$0->append(") = "_s);
			var$0->append($($Character$UnicodeBlock::of(ch->charValue())));
			$System::err->println($$str(var$0));
			$throwNew($RuntimeException, "Blocks aren\'t equal."_s);
		}
	}
	$nc($System::out)->println("Passed."_s);
}

Bug4404588::Bug4404588() {
}

$Class* Bug4404588::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"charData", "[[Ljava/lang/Object;", nullptr, 0, $field(Bug4404588, charData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug4404588, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug4404588, main, void, $StringArray*)},
		{"run", "()V", nullptr, 0, $virtualMethod(Bug4404588, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug4404588",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug4404588, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bug4404588);
	});
	return class$;
}

$Class* Bug4404588::class$ = nullptr;