#include <jdk/internal/module/ModuleInfoWriter.h>

#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleResolutionAttribute.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleTargetAttribute.h>
#include <jcpp.h>

#undef TRANSITIVE
#undef REQUIRES_MODS_TO_FLAGS
#undef OPENS_MODS_TO_FLAGS
#undef V10
#undef SYNTHETIC
#undef MANDATED
#undef MODULE_MODS_TO_FLAGS
#undef EXPORTS_MODS_TO_FLAGS
#undef STATIC
#undef EMPTY_STRING_ARRAY
#undef OPEN

using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Stream = ::java::util::stream::Stream;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $ModuleTarget = ::jdk::internal::module::ModuleTarget;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$get>());
	}
	$Map* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleInfoWriter$$Lambda$get::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$get, inst$)},
	{}
};
$MethodInfo ModuleInfoWriter$$Lambda$get::methodInfos[3] = {
	{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$get::*)($Map*)>(&ModuleInfoWriter$$Lambda$get::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$get::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$get",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$get::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$get, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::*)()>(&ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::*)()>(&ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$visitUse$3>());
	}
	$ModuleVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleInfoWriter$$Lambda$visitUse$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$visitUse$3, inst$)},
	{}
};
$MethodInfo ModuleInfoWriter$$Lambda$visitUse$3::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$visitUse$3::*)($ModuleVisitor*)>(&ModuleInfoWriter$$Lambda$visitUse$3::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$visitUse$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$visitUse$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$visitUse$3::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$visitUse$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$visitUse$3::class$ = nullptr;

class ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4 : public $IntFunction {
	$class(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(ModuleInfoWriter::lambda$toModuleInfo$6(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::*)()>(&ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$source$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleInfoWriter$$Lambda$source$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$source$5::*)()>(&ModuleInfoWriter$$Lambda$source$5::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$source$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$source$5",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$source$5::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$source$5, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$source$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ModuleInfoWriter$$Lambda$source$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$source$6::*)()>(&ModuleInfoWriter$$Lambda$source$6::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$source$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$source$6",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$source$6::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$source$6, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$visitPackage$7>());
	}
	$ModuleVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleInfoWriter$$Lambda$visitPackage$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$visitPackage$7, inst$)},
	{}
};
$MethodInfo ModuleInfoWriter$$Lambda$visitPackage$7::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$visitPackage$7::*)($ModuleVisitor*)>(&ModuleInfoWriter$$Lambda$visitPackage$7::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$visitPackage$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$visitPackage$7",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$visitPackage$7::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$visitPackage$7, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ModuleInfoWriter$$Lambda$visitMainClass$8>());
	}
	$ModuleVisitor* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ModuleInfoWriter$$Lambda$visitMainClass$8::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ModuleInfoWriter$$Lambda$visitMainClass$8, inst$)},
	{}
};
$MethodInfo ModuleInfoWriter$$Lambda$visitMainClass$8::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleInfoWriter$$Lambda$visitMainClass$8::*)($ModuleVisitor*)>(&ModuleInfoWriter$$Lambda$visitMainClass$8::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ModuleInfoWriter$$Lambda$visitMainClass$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.module.ModuleInfoWriter$$Lambda$visitMainClass$8",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* ModuleInfoWriter$$Lambda$visitMainClass$8::load$($String* name, bool initialize) {
	$loadClass(ModuleInfoWriter$$Lambda$visitMainClass$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ModuleInfoWriter$$Lambda$visitMainClass$8::class$ = nullptr;

$FieldInfo _ModuleInfoWriter_FieldInfo_[] = {
	{"MODULE_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, MODULE_MODS_TO_FLAGS)},
	{"REQUIRES_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Requires$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, REQUIRES_MODS_TO_FLAGS)},
	{"EXPORTS_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Exports$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, EXPORTS_MODS_TO_FLAGS)},
	{"OPENS_MODS_TO_FLAGS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/module/ModuleDescriptor$Opens$Modifier;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, OPENS_MODS_TO_FLAGS)},
	{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleInfoWriter, EMPTY_STRING_ARRAY)},
	{}
};

$MethodInfo _ModuleInfoWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ModuleInfoWriter::*)()>(&ModuleInfoWriter::init$))},
	{"lambda$toModuleInfo$0", "(Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($Integer*,$Integer*)>(&ModuleInfoWriter::lambda$toModuleInfo$0))},
	{"lambda$toModuleInfo$4", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&ModuleInfoWriter::lambda$toModuleInfo$4))},
	{"lambda$toModuleInfo$6", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&ModuleInfoWriter::lambda$toModuleInfo$6))},
	{"toByteBuffer", "(Ljava/lang/module/ModuleDescriptor;)Ljava/nio/ByteBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ByteBuffer*(*)($ModuleDescriptor*)>(&ModuleInfoWriter::toByteBuffer))},
	{"toBytes", "(Ljava/lang/module/ModuleDescriptor;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ModuleDescriptor*)>(&ModuleInfoWriter::toBytes))},
	{"toModuleInfo", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleResolution;Ljdk/internal/module/ModuleTarget;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($ModuleDescriptor*,$ModuleResolution*,$ModuleTarget*)>(&ModuleInfoWriter::toModuleInfo))},
	{"write", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleResolution;Ljdk/internal/module/ModuleTarget;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ModuleDescriptor*,$ModuleResolution*,$ModuleTarget*,$OutputStream*)>(&ModuleInfoWriter::write)), "java.io.IOException"},
	{"write", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleResolution;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ModuleDescriptor*,$ModuleResolution*,$OutputStream*)>(&ModuleInfoWriter::write)), "java.io.IOException"},
	{"write", "(Ljava/lang/module/ModuleDescriptor;Ljdk/internal/module/ModuleTarget;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ModuleDescriptor*,$ModuleTarget*,$OutputStream*)>(&ModuleInfoWriter::write)), "java.io.IOException"},
	{"write", "(Ljava/lang/module/ModuleDescriptor;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ModuleDescriptor*,$OutputStream*)>(&ModuleInfoWriter::write)), "java.io.IOException"},
	{}
};

$ClassInfo _ModuleInfoWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.module.ModuleInfoWriter",
	"java.lang.Object",
	nullptr,
	_ModuleInfoWriter_FieldInfo_,
	_ModuleInfoWriter_MethodInfo_
};

$Object* allocate$ModuleInfoWriter($Class* clazz) {
	return $of($alloc(ModuleInfoWriter));
}

$Map* ModuleInfoWriter::MODULE_MODS_TO_FLAGS = nullptr;
$Map* ModuleInfoWriter::REQUIRES_MODS_TO_FLAGS = nullptr;
$Map* ModuleInfoWriter::EXPORTS_MODS_TO_FLAGS = nullptr;
$Map* ModuleInfoWriter::OPENS_MODS_TO_FLAGS = nullptr;
$StringArray* ModuleInfoWriter::EMPTY_STRING_ARRAY = nullptr;

void ModuleInfoWriter::init$() {
}

$bytes* ModuleInfoWriter::toModuleInfo($ModuleDescriptor* md, $ModuleResolution* mres, $ModuleTarget* target) {
	$init(ModuleInfoWriter);
	$var($ClassWriter, cw, $new($ClassWriter, 0));
	cw->visit($Opcodes::V10, 32768, "module-info"_s, nullptr, nullptr, nullptr);
	$var($Object, var$0, $of($Integer::valueOf(0)));
	int32_t moduleFlags = $nc(($cast($Integer, $($nc($($nc($($nc($($nc(md)->modifiers()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$get, static_cast<$Map*>($nc(ModuleInfoWriter::MODULE_MODS_TO_FLAGS)))))))->reduce(var$0, static_cast<$BinaryOperator*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))))))->intValue();
	$var($String, vs, $cast($String, $nc($(md->rawVersion()))->orElse(nullptr)));
	$var($ModuleVisitor, mv, cw->visitModule($(md->name()), moduleFlags, vs));
	{
		$var($Iterator, i$, $nc($(md->requires()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Requires, r, $cast($ModuleDescriptor$Requires, i$->next()));
			{
				$var($Object, var$1, $of($Integer::valueOf(0)));
				int32_t flags = $nc(($cast($Integer, $($nc($($nc($($nc($($nc(r)->modifiers()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$get, static_cast<$Map*>($nc(ModuleInfoWriter::REQUIRES_MODS_TO_FLAGS)))))))->reduce(var$1, static_cast<$BinaryOperator*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))))))->intValue();
				$assign(vs, $cast($String, $nc($(r->rawCompiledVersion()))->orElse(nullptr)));
				$nc(mv)->visitRequire($(r->name()), flags, vs);
			}
		}
	}
	{
		$var($Iterator, i$, $nc($(md->exports()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Exports, e, $cast($ModuleDescriptor$Exports, i$->next()));
			{
				$var($Object, var$2, $of($Integer::valueOf(0)));
				int32_t flags = $nc(($cast($Integer, $($nc($($nc($($nc($($nc(e)->modifiers()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$get, static_cast<$Map*>($nc(ModuleInfoWriter::EXPORTS_MODS_TO_FLAGS)))))))->reduce(var$2, static_cast<$BinaryOperator*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))))))->intValue();
				$var($StringArray, targets, $fcast($StringArray, $nc($(e->targets()))->toArray(ModuleInfoWriter::EMPTY_STRING_ARRAY)));
				$nc(mv)->visitExport($($nc($(e->source()))->replace(u'.', u'/')), flags, targets);
			}
		}
	}
	{
		$var($Iterator, i$, $nc($(md->opens()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Opens, opens, $cast($ModuleDescriptor$Opens, i$->next()));
			{
				$var($Object, var$3, $of($Integer::valueOf(0)));
				int32_t flags = $nc(($cast($Integer, $($nc($($nc($($nc($($nc(opens)->modifiers()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$get, static_cast<$Map*>($nc(ModuleInfoWriter::OPENS_MODS_TO_FLAGS)))))))->reduce(var$3, static_cast<$BinaryOperator*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1)))))))->intValue();
				$var($StringArray, targets, $fcast($StringArray, $nc($(opens->targets()))->toArray(ModuleInfoWriter::EMPTY_STRING_ARRAY)));
				$nc(mv)->visitOpen($($nc($(opens->source()))->replace(u'.', u'/')), flags, targets);
			}
		}
	}
	$nc($($nc($($nc($(md->uses()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))))->forEach(static_cast<$Consumer*>($$new(ModuleInfoWriter$$Lambda$visitUse$3, static_cast<$ModuleVisitor*>($nc(mv)))));
	{
		$var($Iterator, i$, $nc($(md->provides()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleDescriptor$Provides, p, $cast($ModuleDescriptor$Provides, i$->next()));
			{
				$var($String, var$4, $nc($($nc(p)->service()))->replace(u'.', u'/'));
				$nc(mv)->visitProvide(var$4, $fcast($StringArray, $($nc($($nc($($nc($(p->providers()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))))->toArray(static_cast<$IntFunction*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4))))));
			}
		}
	}
	$var($Stream, exported, $nc($($nc($(md->exports()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$source$5))));
	$var($Stream, open, $nc($($nc($(md->opens()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$source$6))));
	int64_t exportedOrOpen = $nc($($nc($($Stream::concat(exported, open)))->distinct()))->count();
	if ($nc($(md->packages()))->size() > exportedOrOpen) {
		$nc($($nc($($nc($(md->packages()))->stream()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))))->forEach(static_cast<$Consumer*>($$new(ModuleInfoWriter$$Lambda$visitPackage$7, static_cast<$ModuleVisitor*>($nc(mv)))));
	}
	$nc($($nc($(md->mainClass()))->map(static_cast<$Function*>($$new(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2)))))->ifPresent(static_cast<$Consumer*>($$new(ModuleInfoWriter$$Lambda$visitMainClass$8, static_cast<$ModuleVisitor*>($nc(mv)))));
	$nc(mv)->visitEnd();
	if (mres != nullptr) {
		cw->visitAttribute($$new($ModuleResolutionAttribute, mres->value()));
	}
	if (target != nullptr && $nc($(target->targetPlatform()))->length() > 0) {
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

void clinit$ModuleInfoWriter($Class* class$) {
	$init($ModuleDescriptor$Modifier);
	$var($Object, var$0, $of($ModuleDescriptor$Modifier::OPEN));
	$var($Object, var$1, $of($Integer::valueOf(32)));
	$var($Object, var$2, $of($ModuleDescriptor$Modifier::SYNTHETIC));
	$var($Object, var$3, $of($Integer::valueOf(4096)));
	$var($Object, var$4, $of($ModuleDescriptor$Modifier::MANDATED));
	$assignStatic(ModuleInfoWriter::MODULE_MODS_TO_FLAGS, $Map::of(var$0, var$1, var$2, var$3, var$4, $($Integer::valueOf(32768))));
	$init($ModuleDescriptor$Requires$Modifier);
	$var($Object, var$5, $of($ModuleDescriptor$Requires$Modifier::TRANSITIVE));
	$var($Object, var$6, $of($Integer::valueOf(32)));
	$var($Object, var$7, $of($ModuleDescriptor$Requires$Modifier::STATIC));
	$var($Object, var$8, $of($Integer::valueOf(64)));
	$var($Object, var$9, $of($ModuleDescriptor$Requires$Modifier::SYNTHETIC));
	$var($Object, var$10, $of($Integer::valueOf(4096)));
	$var($Object, var$11, $of($ModuleDescriptor$Requires$Modifier::MANDATED));
	$assignStatic(ModuleInfoWriter::REQUIRES_MODS_TO_FLAGS, $Map::of(var$5, var$6, var$7, var$8, var$9, var$10, var$11, $($Integer::valueOf(32768))));
	$init($ModuleDescriptor$Exports$Modifier);
	$var($Object, var$12, $of($ModuleDescriptor$Exports$Modifier::SYNTHETIC));
	$var($Object, var$13, $of($Integer::valueOf(4096)));
	$var($Object, var$14, $of($ModuleDescriptor$Exports$Modifier::MANDATED));
	$assignStatic(ModuleInfoWriter::EXPORTS_MODS_TO_FLAGS, $Map::of(var$12, var$13, var$14, $($Integer::valueOf(32768))));
	$init($ModuleDescriptor$Opens$Modifier);
	$var($Object, var$15, $of($ModuleDescriptor$Opens$Modifier::SYNTHETIC));
	$var($Object, var$16, $of($Integer::valueOf(4096)));
	$var($Object, var$17, $of($ModuleDescriptor$Opens$Modifier::MANDATED));
	$assignStatic(ModuleInfoWriter::OPENS_MODS_TO_FLAGS, $Map::of(var$15, var$16, var$17, $($Integer::valueOf(32768))));
	$assignStatic(ModuleInfoWriter::EMPTY_STRING_ARRAY, $new($StringArray, 0));
}

ModuleInfoWriter::ModuleInfoWriter() {
}

$Class* ModuleInfoWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ModuleInfoWriter$$Lambda$get::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$get::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$lambda$toModuleInfo$0$1::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$lambda$toModuleInfo$4$2::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$visitUse$3::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$visitUse$3::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$lambda$toModuleInfo$6$4::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$source$5::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$source$5::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$source$6::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$source$6::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$visitPackage$7::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$visitPackage$7::load$(name, initialize);
		}
		if (name->equals(ModuleInfoWriter$$Lambda$visitMainClass$8::classInfo$.name)) {
			return ModuleInfoWriter$$Lambda$visitMainClass$8::load$(name, initialize);
		}
	}
	$loadClass(ModuleInfoWriter, name, initialize, &_ModuleInfoWriter_ClassInfo_, clinit$ModuleInfoWriter, allocate$ModuleInfoWriter);
	return class$;
}

$Class* ModuleInfoWriter::class$ = nullptr;

		} // module
	} // internal
} // jdk