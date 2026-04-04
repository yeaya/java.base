#include <jdk/internal/module/ModuleInfoWriter.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/ModuleDescriptor$Exports$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Exports.h>
#include <java/lang/module/ModuleDescriptor$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Opens$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Opens.h>
#include <java/lang/module/ModuleDescriptor$Provides.h>
#include <java/lang/module/ModuleDescriptor$Requires$Modifier.h>
#include <java/lang/module/ModuleDescriptor$Requires.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleResolution.h>
#include <jdk/internal/module/ModuleTarget.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleResolutionAttribute.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleTargetAttribute.h>
#include <jcpp.h>

#undef EMPTY_STRING_ARRAY
#undef EXPORTS_MODS_TO_FLAGS
#undef MANDATED
#undef MODULE_MODS_TO_FLAGS
#undef OPEN
#undef OPENS_MODS_TO_FLAGS
#undef REQUIRES_MODS_TO_FLAGS
#undef STATIC
#undef SYNTHETIC
#undef TRANSITIVE

using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Exports = ::java::lang::module::ModuleDescriptor$Exports;
using $ModuleDescriptor$Exports$Modifier = ::java::lang::module::ModuleDescriptor$Exports$Modifier;
using $ModuleDescriptor$Modifier = ::java::lang::module::ModuleDescriptor$Modifier;
using $ModuleDescriptor$Opens = ::java::lang::module::ModuleDescriptor$Opens;
using $ModuleDescriptor$Opens$Modifier = ::java::lang::module::ModuleDescriptor$Opens$Modifier;
using $ModuleDescriptor$Provides = ::java::lang::module::ModuleDescriptor$Provides;
using $ModuleDescriptor$Requires = ::java::lang::module::ModuleDescriptor$Requires;
using $ModuleDescriptor$Requires$Modifier = ::java::lang::module::ModuleDescriptor$Requires$Modifier;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Stream = ::java::util::stream::Stream;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $ModuleResolutionAttribute = ::jdk::internal::org::objectweb::asm$::commons::ModuleResolutionAttribute;
using $ModuleTargetAttribute = ::jdk::internal::org::objectweb::asm$::commons::ModuleTargetAttribute;

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfoWriter$$Lambda$get : public $Function {
	$class(ModuleInfoWriter$$Lambda$get, $NO_CLASS_INIT, $Function)
public:
	void init$($Map* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* key) override {
		 return $nc(inst$)->get(key);
	}
	$Map* inst$ = nullptr;
};
$Class* ModuleInfoWriter$$Lambda$get::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$get, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$get, init$, void, $Map*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$get, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$get",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$get, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$get);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$get::class$ = nullptr;

class ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1 : public $BinaryOperator {
	$class(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* x, Object$* y) override {
		 return $of(ModuleInfoWriter::lambda$toModuleInfo$0($cast($Integer, x), $cast($Integer, y)));
	}
};
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::class$ = nullptr;

class ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2 : public $Function {
	$class(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* sn) override {
		 return $of(ModuleInfoWriter::lambda$toModuleInfo$4($cast($String, sn)));
	}
};
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::class$ = nullptr;

class ModuleInfoWriter$$Lambda$visitUse$3 : public $Consumer {
	$class(ModuleInfoWriter$$Lambda$visitUse$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ModuleVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* service) override {
		$nc(inst$)->visitUse($cast($String, service));
	}
	$ModuleVisitor* inst$ = nullptr;
};
$Class* ModuleInfoWriter$$Lambda$visitUse$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$visitUse$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$visitUse$3, init$, void, $ModuleVisitor*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$visitUse$3, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$visitUse$3",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$visitUse$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$visitUse$3);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$visitUse$3::class$ = nullptr;

class ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4 : public $IntFunction {
	$class(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return ModuleInfoWriter::lambda$toModuleInfo$6(x$0);
	}
};
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::class$ = nullptr;

class ModuleInfoWriter$$Lambda$source$5 : public $Function {
	$class(ModuleInfoWriter$$Lambda$source$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Exports, inst$)->source());
	}
};
$Class* ModuleInfoWriter$$Lambda$source$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$source$5, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$source$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$source$5",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$source$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$source$5);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$source$5::class$ = nullptr;

class ModuleInfoWriter$$Lambda$source$6 : public $Function {
	$class(ModuleInfoWriter$$Lambda$source$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ModuleDescriptor$Opens, inst$)->source());
	}
};
$Class* ModuleInfoWriter$$Lambda$source$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$source$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$source$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$source$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$source$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$source$6);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$source$6::class$ = nullptr;

class ModuleInfoWriter$$Lambda$visitPackage$7 : public $Consumer {
	$class(ModuleInfoWriter$$Lambda$visitPackage$7, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ModuleVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* packaze) override {
		$nc(inst$)->visitPackage($cast($String, packaze));
	}
	$ModuleVisitor* inst$ = nullptr;
};
$Class* ModuleInfoWriter$$Lambda$visitPackage$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$visitPackage$7, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$visitPackage$7, init$, void, $ModuleVisitor*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$visitPackage$7, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$visitPackage$7",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$visitPackage$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$visitPackage$7);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$visitPackage$7::class$ = nullptr;

class ModuleInfoWriter$$Lambda$visitMainClass$8 : public $Consumer {
	$class(ModuleInfoWriter$$Lambda$visitMainClass$8, $NO_CLASS_INIT, $Consumer)
public:
	void init$($ModuleVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* mainClass) override {
		$nc(inst$)->visitMainClass($cast($String, mainClass));
	}
	$ModuleVisitor* inst$ = nullptr;
};
$Class* ModuleInfoWriter$$Lambda$visitMainClass$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$visitMainClass$8, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(ModuleInfoWriter$$Lambda$visitMainClass$8, init$, void, $ModuleVisitor*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ModuleInfoWriter$$Lambda$visitMainClass$8, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.module.ModuleInfoWriter$$Lambda$visitMainClass$8",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter$$Lambda$visitMainClass$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter$$Lambda$visitMainClass$8);
	});
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$visitMainClass$8::class$ = nullptr;

$Map* ModuleInfoWriter::MODULE_MODS_TO_FLAGS = nullptr;
$Map* ModuleInfoWriter::REQUIRES_MODS_TO_FLAGS = nullptr;
$Map* ModuleInfoWriter::EXPORTS_MODS_TO_FLAGS = nullptr;
$Map* ModuleInfoWriter::OPENS_MODS_TO_FLAGS = nullptr;
$StringArray* ModuleInfoWriter::EMPTY_STRING_ARRAY = nullptr;

void ModuleInfoWriter::init$() {
}

$bytes* ModuleInfoWriter::toModuleInfo($ModuleDescriptor* md, $ModuleResolution* mres, $ModuleTarget* target) {
	$init(ModuleInfoWriter);
	$useLocalObjectStack();
	$var($ClassWriter, cw, $new($ClassWriter, 0));
	cw->visit($Opcodes::V10, 0x00008000, "module-info"_s, nullptr, nullptr, nullptr);
	$var($Object, var$0, $Integer::valueOf(0));
	int32_t moduleFlags = $$sure($Integer, $$nc($$nc($$nc($nc(md)->modifiers())->stream())->map($$new(ModuleInfoWriter$$Lambda$get, $nc(ModuleInfoWriter::MODULE_MODS_TO_FLAGS))))->reduce(var$0, $$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))->intValue();
	$var($String, vs, $cast($String, $$nc($nc(md)->rawVersion())->orElse(nullptr)));
	$var($ModuleVisitor, mv, cw->visitModule($(md->name()), moduleFlags, vs));
	{
		$var($Iterator, i$, $$nc(md->requires())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Requires, r, $cast($ModuleDescriptor$Requires, i$->next()));
			{
				$var($Object, var$1, $Integer::valueOf(0));
				int32_t flags = $$sure($Integer, $$nc($$nc($$nc($nc(r)->modifiers())->stream())->map($$new(ModuleInfoWriter$$Lambda$get, $nc(ModuleInfoWriter::REQUIRES_MODS_TO_FLAGS))))->reduce(var$1, $$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))->intValue();
				$assign(vs, $cast($String, $$nc($nc(r)->rawCompiledVersion())->orElse(nullptr)));
				$nc(mv)->visitRequire($(r->name()), flags, vs);
			}
		}
	}
	{
		$var($Iterator, i$, $$nc(md->exports())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Exports, e, $cast($ModuleDescriptor$Exports, i$->next()));
			{
				$var($Object, var$2, $Integer::valueOf(0));
				int32_t flags = $$sure($Integer, $$nc($$nc($$nc($nc(e)->modifiers())->stream())->map($$new(ModuleInfoWriter$$Lambda$get, $nc(ModuleInfoWriter::EXPORTS_MODS_TO_FLAGS))))->reduce(var$2, $$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))->intValue();
				$var($StringArray, targets, $cast($StringArray, $$nc($nc(e)->targets())->toArray(ModuleInfoWriter::EMPTY_STRING_ARRAY)));
				$nc(mv)->visitExport($($$nc(e->source())->replace(u'.', u'/')), flags, targets);
			}
		}
	}
	{
		$var($Iterator, i$, $$nc(md->opens())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Opens, opens, $cast($ModuleDescriptor$Opens, i$->next()));
			{
				$var($Object, var$3, $Integer::valueOf(0));
				int32_t flags = $$sure($Integer, $$nc($$nc($$nc($nc(opens)->modifiers())->stream())->map($$new(ModuleInfoWriter$$Lambda$get, $nc(ModuleInfoWriter::OPENS_MODS_TO_FLAGS))))->reduce(var$3, $$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))->intValue();
				$var($StringArray, targets, $cast($StringArray, $$nc($nc(opens)->targets())->toArray(ModuleInfoWriter::EMPTY_STRING_ARRAY)));
				$nc(mv)->visitOpen($($$nc(opens->source())->replace(u'.', u'/')), flags, targets);
			}
		}
	}
	$$nc($$nc($$nc(md->uses())->stream())->map($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))->forEach($$new(ModuleInfoWriter$$Lambda$visitUse$3, $nc(mv)));
	{
		$var($Iterator, i$, $$nc(md->provides())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Provides, p, $cast($ModuleDescriptor$Provides, i$->next()));
			{
				$var($String, var$4, $$nc($nc(p)->service())->replace(u'.', u'/'));
				mv->visitProvide(var$4, $$cast($StringArray, $$nc($$nc($$nc(p->providers())->stream())->map($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))->toArray($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4))));
			}
		}
	}
	$var($Stream, exported, $$nc($$nc(md->exports())->stream())->map($$new(ModuleInfoWriter$$Lambda$source$5)));
	$var($Stream, open, $$nc($$nc(md->opens())->stream())->map($$new(ModuleInfoWriter$$Lambda$source$6)));
	int64_t exportedOrOpen = $$nc($$nc($Stream::concat(exported, open))->distinct())->count();
	if ($$nc(md->packages())->size() > exportedOrOpen) {
		$$nc($$nc($$nc(md->packages())->stream())->map($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))->forEach($$new(ModuleInfoWriter$$Lambda$visitPackage$7, mv));
	}
	$$nc($$nc(md->mainClass())->map($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))->ifPresent($$new(ModuleInfoWriter$$Lambda$visitMainClass$8, mv));
	mv->visitEnd();
	if (mres != nullptr) {
		cw->visitAttribute($$new($ModuleResolutionAttribute, mres->value()));
	}
	if (target != nullptr && $$nc(target->targetPlatform())->length() > 0) {
		cw->visitAttribute($$new($ModuleTargetAttribute, $(target->targetPlatform())));
	}
	cw->visitEnd();
	return cw->toByteArray();
}

void ModuleInfoWriter::write($ModuleDescriptor* descriptor, $ModuleResolution* mres, $ModuleTarget* target, $OutputStream* out) {
	$init(ModuleInfoWriter);
	$var($bytes, bytes, toModuleInfo(descriptor, mres, target));
	$nc(out)->write(bytes);
}

void ModuleInfoWriter::write($ModuleDescriptor* descriptor, $ModuleResolution* mres, $OutputStream* out) {
	$init(ModuleInfoWriter);
	write(descriptor, mres, nullptr, out);
}

void ModuleInfoWriter::write($ModuleDescriptor* descriptor, $ModuleTarget* target, $OutputStream* out) {
	$init(ModuleInfoWriter);
	write(descriptor, nullptr, target, out);
}

void ModuleInfoWriter::write($ModuleDescriptor* descriptor, $OutputStream* out) {
	$init(ModuleInfoWriter);
	write(descriptor, nullptr, nullptr, out);
}

$bytes* ModuleInfoWriter::toBytes($ModuleDescriptor* descriptor) {
	$init(ModuleInfoWriter);
	return toModuleInfo(descriptor, nullptr, nullptr);
}

$ByteBuffer* ModuleInfoWriter::toByteBuffer($ModuleDescriptor* descriptor) {
	$init(ModuleInfoWriter);
	$var($bytes, bytes, toModuleInfo(descriptor, nullptr, nullptr));
	return $ByteBuffer::wrap(bytes);
}

$StringArray* ModuleInfoWriter::lambda$toModuleInfo$6(int32_t x$0) {
	$init(ModuleInfoWriter);
	return $new($StringArray, x$0);
}

$String* ModuleInfoWriter::lambda$toModuleInfo$4($String* sn) {
	$init(ModuleInfoWriter);
	return $nc(sn)->replace(u'.', u'/');
}

$Integer* ModuleInfoWriter::lambda$toModuleInfo$0($Integer* x, $Integer* y) {
	$init(ModuleInfoWriter);
	int32_t var$0 = $nc(x)->intValue();
	return $Integer::valueOf((var$0 | $nc(y)->intValue()));
}

void ModuleInfoWriter::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($ModuleDescriptor$Modifier);
	$var($Object, var$0, $ModuleDescriptor$Modifier::OPEN);
	$var($Object, var$1, $Integer::valueOf(32));
	$var($Object, var$2, $ModuleDescriptor$Modifier::SYNTHETIC);
	$var($Object, var$3, $Integer::valueOf(4096));
	$var($Object, var$4, $ModuleDescriptor$Modifier::MANDATED);
	$assignStatic(ModuleInfoWriter::MODULE_MODS_TO_FLAGS, $Map::of(var$0, var$1, var$2, var$3, var$4, $($Integer::valueOf(0x00008000))));
	$init($ModuleDescriptor$Requires$Modifier);
	$var($Object, var$5, $ModuleDescriptor$Requires$Modifier::TRANSITIVE);
	$var($Object, var$6, $Integer::valueOf(32));
	$var($Object, var$7, $ModuleDescriptor$Requires$Modifier::STATIC);
	$var($Object, var$8, $Integer::valueOf(64));
	$var($Object, var$9, $ModuleDescriptor$Requires$Modifier::SYNTHETIC);
	$var($Object, var$10, $Integer::valueOf(4096));
	$var($Object, var$11, $ModuleDescriptor$Requires$Modifier::MANDATED);
	$assignStatic(ModuleInfoWriter::REQUIRES_MODS_TO_FLAGS, $Map::of(var$5, var$6, var$7, var$8, var$9, var$10, var$11, $($Integer::valueOf(0x00008000))));
	$init($ModuleDescriptor$Exports$Modifier);
	$var($Object, var$12, $ModuleDescriptor$Exports$Modifier::SYNTHETIC);
	$var($Object, var$13, $Integer::valueOf(4096));
	$var($Object, var$14, $ModuleDescriptor$Exports$Modifier::MANDATED);
	$assignStatic(ModuleInfoWriter::EXPORTS_MODS_TO_FLAGS, $Map::of(var$12, var$13, var$14, $($Integer::valueOf(0x00008000))));
	$init($ModuleDescriptor$Opens$Modifier);
	$var($Object, var$15, $ModuleDescriptor$Opens$Modifier::SYNTHETIC);
	$var($Object, var$16, $Integer::valueOf(4096));
	$var($Object, var$17, $ModuleDescriptor$Opens$Modifier::MANDATED);
	$assignStatic(ModuleInfoWriter::OPENS_MODS_TO_FLAGS, $Map::of(var$15, var$16, var$17, $($Integer::valueOf(0x00008000))));
	$assignStatic(ModuleInfoWriter::EMPTY_STRING_ARRAY, $new($StringArray, 0));
}

ModuleInfoWriter::ModuleInfoWriter() {
}

$Class* ModuleInfoWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$get")) {
			return ModuleInfoWriter$$Lambda$get::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1")) {
			return ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2")) {
			return ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$visitUse$3")) {
			return ModuleInfoWriter$$Lambda$visitUse$3::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4")) {
			return ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$source$5")) {
			return ModuleInfoWriter$$Lambda$source$5::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$source$6")) {
			return ModuleInfoWriter$$Lambda$source$6::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$visitPackage$7")) {
			return ModuleInfoWriter$$Lambda$visitPackage$7::load$(name, initialize);
		}
		if (name->equals("jdk.internal.module.ModuleInfoWriter$$Lambda$visitMainClass$8")) {
			return ModuleInfoWriter$$Lambda$visitMainClass$8::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"MODULE_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, MODULE_MODS_TO_FLAGS)},
		{"REQUIRES_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, REQUIRES_MODS_TO_FLAGS)},
		{"EXPORTS_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, EXPORTS_MODS_TO_FLAGS)},
		{"OPENS_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, OPENS_MODS_TO_FLAGS)},
		{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, EMPTY_STRING_ARRAY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ModuleInfoWriter, init$, void)},
		{"lambda$toModuleInfo$0", "(Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleInfoWriter, lambda$toModuleInfo$0, $Integer*, $Integer*, $Integer*)},
		{"lambda$toModuleInfo$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleInfoWriter, lambda$toModuleInfo$4, $String*, $String*)},
		{"lambda$toModuleInfo$6", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ModuleInfoWriter, lambda$toModuleInfo$6, $StringArray*, int32_t)},
		{"toByteBuffer", "(Ljava/lang/module/ModuleDescriptor;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoWriter, toByteBuffer, $ByteBuffer*, $ModuleDescriptor*)},
		{"toBytes", "(Ljava/lang/module/ModuleDescriptor;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoWriter, toBytes, $bytes*, $ModuleDescriptor*)},
		{"toModuleInfo", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleResolution;Ljdk/internal/module/ModuleTarget;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(ModuleInfoWriter, toModuleInfo, $bytes*, $ModuleDescriptor*, $ModuleResolution*, $ModuleTarget*)},
		{"write", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleResolution;Ljdk/internal/module/ModuleTarget;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoWriter, write, void, $ModuleDescriptor*, $ModuleResolution*, $ModuleTarget*, $OutputStream*), "java.io.IOException"},
		{"write", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleResolution;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoWriter, write, void, $ModuleDescriptor*, $ModuleResolution*, $OutputStream*), "java.io.IOException"},
		{"write", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoWriter, write, void, $ModuleDescriptor*, $ModuleTarget*, $OutputStream*), "java.io.IOException"},
		{"write", "(Ljava/lang/module/ModuleDescriptor;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleInfoWriter, write, void, $ModuleDescriptor*, $OutputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.ModuleInfoWriter",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleInfoWriter, name, initialize, &classInfo$$, ModuleInfoWriter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleInfoWriter);
	});
	return class$;
}

$Class* ModuleInfoWriter::class$ = nullptr;

		} // module
	} // internal
} // jdk