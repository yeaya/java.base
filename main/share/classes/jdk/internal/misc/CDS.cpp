#include <jdk/internal/misc/CDS.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Process.h>
#include <java/lang/ProcessHandle.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaLangInvokeAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef BASIC_FORMS_HOLDER_CLASS_NAME
#undef CDS
#undef DELEGATING_HOLDER_CLASS_NAME
#undef DIRECT_HOLDER_CLASS_NAME
#undef INVOKERS_HOLDER_CLASS_NAME

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $ProcessHandle = ::java::lang::ProcessHandle;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Stream = ::java::util::stream::Stream;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $VM = ::jdk::internal::misc::VM;

namespace jdk {
	namespace internal {
		namespace misc {

class CDS$$Lambda$lambda$drainOutput$0 : public $Runnable {
	$class(CDS$$Lambda$lambda$drainOutput$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($InputStream* stream, $String* fileName, $List* cmds) {
		$set(this, stream, stream);
		$set(this, fileName, fileName);
		$set(this, cmds, cmds);
	}
	virtual void run() override {
		CDS::lambda$drainOutput$0(stream, fileName, cmds);
	}
	$InputStream* stream = nullptr;
	$String* fileName = nullptr;
	$List* cmds = nullptr;
};
$Class* CDS$$Lambda$lambda$drainOutput$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(CDS$$Lambda$lambda$drainOutput$0, stream)},
		{"fileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CDS$$Lambda$lambda$drainOutput$0, fileName)},
		{"cmds", "Ljava/util/List;", nullptr, $PUBLIC, $field(CDS$$Lambda$lambda$drainOutput$0, cmds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/util/List;)V", nullptr, $PUBLIC, $method(CDS$$Lambda$lambda$drainOutput$0, init$, void, $InputStream*, $String*, $List*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CDS$$Lambda$lambda$drainOutput$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.misc.CDS$$Lambda$lambda$drainOutput$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CDS$$Lambda$lambda$drainOutput$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CDS$$Lambda$lambda$drainOutput$0);
	});
	return class$;
}
$Class* CDS$$Lambda$lambda$drainOutput$0::class$ = nullptr;

bool CDS::isDumpingClassList$ = false;
bool CDS::isDumpingArchive$ = false;
bool CDS::isSharingEnabled$ = false;
$String* CDS::DIRECT_HOLDER_CLASS_NAME = nullptr;
$String* CDS::DELEGATING_HOLDER_CLASS_NAME = nullptr;
$String* CDS::BASIC_FORMS_HOLDER_CLASS_NAME = nullptr;
$String* CDS::INVOKERS_HOLDER_CLASS_NAME = nullptr;
$StringArray* CDS::excludeFlags = nullptr;

void CDS::init$() {
}

bool CDS::isDumpingClassList() {
	$init(CDS);
	return CDS::isDumpingClassList$;
}

bool CDS::isDumpingArchive() {
	$init(CDS);
	return CDS::isDumpingArchive$;
}

bool CDS::isSharingEnabled() {
	$init(CDS);
	return CDS::isSharingEnabled$;
}

bool CDS::isDumpingClassList0() {
	$init(CDS);
	$prepareNativeStatic(isDumpingClassList0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool CDS::isDumpingArchive0() {
	$init(CDS);
	$prepareNativeStatic(isDumpingArchive0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool CDS::isSharingEnabled0() {
	$init(CDS);
	$prepareNativeStatic(isSharingEnabled0, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void CDS::logLambdaFormInvoker($String* line) {
	$init(CDS);
	$prepareNativeStatic(logLambdaFormInvoker, void, $String* line);
	$invokeNativeStatic(line);
	$finishNativeStatic();
}

void CDS::initializeFromArchive($Class* c) {
	$init(CDS);
	$prepareNativeStatic(initializeFromArchive, void, $Class* c);
	$invokeNativeStatic(c);
	$finishNativeStatic();
}

void CDS::defineArchivedModules($ClassLoader* platformLoader, $ClassLoader* systemLoader) {
	$init(CDS);
	$prepareNativeStatic(defineArchivedModules, void, $ClassLoader* platformLoader, $ClassLoader* systemLoader);
	$invokeNativeStatic(platformLoader, systemLoader);
	$finishNativeStatic();
}

int64_t CDS::getRandomSeedForDumping() {
	$init(CDS);
	$prepareNativeStatic(getRandomSeedForDumping, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void CDS::traceLambdaFormInvoker($String* prefix, $String* holder, $String* name, $String* type) {
	$init(CDS);
	if (CDS::isDumpingClassList$) {
		logLambdaFormInvoker($$str({prefix, " "_s, holder, " "_s, name, " "_s, type}));
	}
}

void CDS::traceSpeciesType($String* prefix, $String* cn) {
	$init(CDS);
	if (CDS::isDumpingClassList$) {
		logLambdaFormInvoker($$str({prefix, " "_s, cn}));
	}
}

bool CDS::isValidHolderName($String* name) {
	$init(CDS);
	bool var$2 = $nc(name)->equals(CDS::DIRECT_HOLDER_CLASS_NAME);
	bool var$1 = var$2 || name->equals(CDS::DELEGATING_HOLDER_CLASS_NAME);
	bool var$0 = var$1 || name->equals(CDS::BASIC_FORMS_HOLDER_CLASS_NAME);
	return var$0 || name->equals(CDS::INVOKERS_HOLDER_CLASS_NAME);
}

bool CDS::isBasicTypeChar(char16_t c) {
	$init(CDS);
	return "LIJFDV"_s->indexOf(c) >= 0;
}

bool CDS::isValidMethodType($String* type) {
	$init(CDS);
	$var($StringArray, typeParts, $nc(type)->split("_"_s));
	bool var$0 = typeParts->length != 2 || $nc(typeParts->get(1))->length() != 1;
	if (var$0 || !isBasicTypeChar($nc(typeParts->get(1))->charAt(0))) {
		return false;
	}
	if (!isBasicTypeChar($nc(typeParts->get(0))->charAt(0))) {
		return false;
	}
	for (int32_t i = 1; i < $nc(typeParts->get(0))->length(); ++i) {
		char16_t c = $nc(typeParts->get(0))->charAt(i);
		if (!isBasicTypeChar(c)) {
			if (!(c >= u'0' && c <= u'9')) {
				return false;
			}
		}
	}
	return true;
}

void CDS::validateInputLines($StringArray* lines) {
	$init(CDS);
	$useLocalObjectStack();
	$var($StringArray, arr$, lines);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, s, arr$->get(i$));
		{
			bool var$0 = !$nc(s)->startsWith("[LF_RESOLVE]"_s);
			if (var$0 && !s->startsWith("[SPECIES_RESOLVE]"_s)) {
				$throwNew($IllegalArgumentException, $$str({"Wrong prefix: "_s, s}));
			}
			$var($StringArray, parts, s->split(" "_s));
			bool isLF = s->startsWith("[LF_RESOLVE]"_s);
			if (isLF) {
				if (parts->length != 4) {
					$throwNew($IllegalArgumentException, $$str({"Incorrect number of items in the line: "_s, $$str(parts->length)}));
				}
				if (!isValidHolderName(parts->get(1))) {
					$throwNew($IllegalArgumentException, $$str({"Invalid holder class name: "_s, parts->get(1)}));
				}
				if (!isValidMethodType(parts->get(3))) {
					$throwNew($IllegalArgumentException, $$str({"Invalid method type: "_s, parts->get(3)}));
				}
			} else if (parts->length != 2) {
				$throwNew($IllegalArgumentException, $$str({"Incorrect number of items in the line: "_s, $$str(parts->length)}));
			}
		}
	}
}

$ObjectArray* CDS::generateLambdaFormHolderClasses($StringArray* lines) {
	$init(CDS);
	$useLocalObjectStack();
	$Objects::requireNonNull(lines);
	validateInputLines(lines);
	$var($Stream, lineStream, $Arrays::stream(lines));
	$var($Map, result, $$nc($SharedSecrets::getJavaLangInvokeAccess())->generateHolderClasses(lineStream));
	int32_t size = $nc(result)->size();
	$var($ObjectArray, retArray, $new($ObjectArray, size * 2));
	int32_t index = 0;
	{
		$var($Iterator, i$, $$nc(result->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				retArray->set(index++, $($nc(entry)->getKey()));
				retArray->set(index++, $(entry->getValue()));
			}
		}
	}
	;
	return retArray;
}

void CDS::dumpClassList($String* listFileName) {
	$init(CDS);
	$prepareNativeStatic(dumpClassList, void, $String* listFileName);
	$invokeNativeStatic(listFileName);
	$finishNativeStatic();
}

void CDS::dumpDynamicArchive($String* archiveFileName) {
	$init(CDS);
	$prepareNativeStatic(dumpDynamicArchive, void, $String* archiveFileName);
	$invokeNativeStatic(archiveFileName);
	$finishNativeStatic();
}

$String* CDS::drainOutput($InputStream* stream, int64_t pid, $String* tail, $List* cmds) {
	$init(CDS);
	$useLocalObjectStack();
	$var($String, fileName, $str({"java_pid"_s, $$str(pid), "_"_s, tail}));
	$$new($Thread, $$new(CDS$$Lambda$lambda$drainOutput$0, stream, fileName, cmds))->start();
	return fileName;
}

bool CDS::containsExcludedFlags($String* testStr) {
	$init(CDS);
	$useLocalObjectStack();
	$var($StringArray, arr$, CDS::excludeFlags);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, e, arr$->get(i$));
		if ($nc(testStr)->contains(e)) {
			return true;
		}
	}
	return false;
}

void CDS::dumpSharedArchive(bool isStatic, $String* fileName) {
	$init(CDS);
	$useLocalObjectStack();
	$var($String, currentPid, $String::valueOf($$nc($ProcessHandle::current())->pid()));
	$var($String, archiveFileName, fileName != nullptr ? fileName : $str({"java_pid"_s, currentPid, (isStatic ? "_static.jsa"_s : "_dynamic.jsa"_s)}));
	$var($String, tempArchiveFileName, $str({archiveFileName, ".temp"_s}));
	$var($File, tempArchiveFile, $new($File, tempArchiveFileName));
	if (!tempArchiveFile->exists()) {
		tempArchiveFile->createNewFile();
	}
	tempArchiveFile->delete$();
	if (isStatic) {
		$var($String, listFileName, $str({archiveFileName, ".classlist"_s}));
		$var($File, listFile, $new($File, listFileName));
		if (listFile->exists()) {
			listFile->delete$();
		}
		dumpClassList(listFileName);
		$var($String, jdkHome, $System::getProperty("java.home"_s));
		$var($String, classPath, $System::getProperty("java.class.path"_s));
		$var($List, cmds, $new($ArrayList));
		cmds->add($$str({jdkHome, $File::separator, "bin"_s, $File::separator, "java"_s}));
		cmds->add("-cp"_s);
		cmds->add(classPath);
		cmds->add("-Xlog:cds"_s);
		cmds->add("-Xshare:dump"_s);
		cmds->add($$str({"-XX:SharedClassListFile="_s, listFileName}));
		cmds->add($$str({"-XX:SharedArchiveFile="_s, tempArchiveFileName}));
		$var($StringArray, vmArgs, $VM::getRuntimeArguments());
		if (vmArgs != nullptr) {
			$var($StringArray, arr$, vmArgs);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, arg, arr$->get(i$));
				if (arg != nullptr && !containsExcludedFlags(arg)) {
					cmds->add(arg);
				}
			}
		}
		$var($Process, proc, $$nc($Runtime::getRuntime())->exec($$cast($StringArray, cmds->toArray($$new($StringArray, 0)))));
		$var($InputStream, var$0, $nc(proc)->getInputStream());
		$var($String, stdOutFile, drainOutput(var$0, proc->pid(), "stdout"_s, cmds));
		$var($InputStream, var$1, proc->getErrorStream());
		$var($String, stdErrFile, drainOutput(var$1, proc->pid(), "stderr"_s, cmds));
		proc->waitFor();
		listFile->delete$();
		if (!tempArchiveFile->exists()) {
			$throwNew($RuntimeException, $$str({"Archive file "_s, tempArchiveFileName, " is not created, please check stdout file "_s, stdOutFile, " or stderr file "_s, stdErrFile, " for more detail"_s}));
		}
	} else {
		dumpDynamicArchive(tempArchiveFileName);
		if (!tempArchiveFile->exists()) {
			$throwNew($RuntimeException, $$str({"Archive file "_s, tempArchiveFileName, " is not created, please check process "_s, currentPid, " output for more detail"_s}));
		}
	}
	$var($File, archiveFile, $new($File, archiveFileName));
	if (archiveFile->exists()) {
		archiveFile->delete$();
	}
	if (!tempArchiveFile->renameTo(archiveFile)) {
		$throwNew($RuntimeException, $$str({"Cannot rename temp file "_s, tempArchiveFileName, " to archive file"_s, archiveFileName}));
	}
	$nc($System::out)->println($$str({(isStatic ? "Static"_s : " Dynamic"_s), " dump to file "_s, archiveFileName}));
}

void CDS::lambda$drainOutput$0($InputStream* stream, $String* fileName, $List* cmds) {
	$init(CDS);
	$useLocalObjectStack();
	try {
		$var($InputStreamReader, isr, $new($InputStreamReader, stream));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($BufferedReader, rdr, $new($BufferedReader, isr));
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$var($PrintStream, prt, $new($PrintStream, fileName));
						$var($Throwable, var$2, nullptr);
						try {
							try {
								prt->println("Command:"_s);
								{
									$var($Iterator, i$, $nc(cmds)->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($String, s, $cast($String, i$->next()));
										{
											prt->print($$str({s, " "_s}));
										}
									}
								}
								prt->println(""_s);
								$var($String, line, nullptr);
								while (($assign(line, rdr->readLine())) != nullptr) {
									prt->println(line);
								}
							} catch ($Throwable& t$) {
								try {
									prt->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$3) {
							$assign(var$2, var$3);
						} /*finally*/ {
							prt->close();
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					} catch ($Throwable& t$) {
						try {
							rdr->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					rdr->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			} catch ($Throwable& t$) {
				try {
					isr->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			isr->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($IOException& e) {
		$throwNew($RuntimeException, $$str({"IOExeption happens during drain stream to file "_s, fileName, ": "_s, $(e->getMessage())}));
	}
}

void CDS::clinit$($Class* clazz) {
	$assignStatic(CDS::DIRECT_HOLDER_CLASS_NAME, "java.lang.invoke.DirectMethodHandle$Holder"_s);
	$assignStatic(CDS::DELEGATING_HOLDER_CLASS_NAME, "java.lang.invoke.DelegatingMethodHandle$Holder"_s);
	$assignStatic(CDS::BASIC_FORMS_HOLDER_CLASS_NAME, "java.lang.invoke.LambdaForm$Holder"_s);
	$assignStatic(CDS::INVOKERS_HOLDER_CLASS_NAME, "java.lang.invoke.Invokers$Holder"_s);
	{
		CDS::isDumpingClassList$ = CDS::isDumpingClassList0();
		CDS::isDumpingArchive$ = CDS::isDumpingArchive0();
		CDS::isSharingEnabled$ = CDS::isSharingEnabled0();
	}
	$assignStatic(CDS::excludeFlags, $new($StringArray, {
		"-XX:DumpLoadedClassList="_s,
		"-XX:+DumpSharedSpaces"_s,
		"-XX:+DynamicDumpSharedSpaces"_s,
		"-XX:+RecordDynamicDumpInfo"_s,
		"-Xshare:"_s,
		"-XX:SharedClassListFile="_s,
		"-XX:SharedArchiveFile="_s,
		"-XX:ArchiveClassesAtExit="_s,
		"-XX:+UseSharedSpaces"_s,
		"-XX:+RequireSharedSpaces"_s
	}));
}

CDS::CDS() {
}

$Class* CDS::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.misc.CDS$$Lambda$lambda$drainOutput$0")) {
			return CDS$$Lambda$lambda$drainOutput$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"isDumpingClassList", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CDS, isDumpingClassList$)},
		{"isDumpingArchive", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CDS, isDumpingArchive$)},
		{"isSharingEnabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CDS, isSharingEnabled$)},
		{"DIRECT_HOLDER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CDS, DIRECT_HOLDER_CLASS_NAME)},
		{"DELEGATING_HOLDER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CDS, DELEGATING_HOLDER_CLASS_NAME)},
		{"BASIC_FORMS_HOLDER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CDS, BASIC_FORMS_HOLDER_CLASS_NAME)},
		{"INVOKERS_HOLDER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CDS, INVOKERS_HOLDER_CLASS_NAME)},
		{"excludeFlags", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CDS, excludeFlags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CDS, init$, void)},
		{"containsExcludedFlags", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, containsExcludedFlags, bool, $String*)},
		{"defineArchivedModules", "(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(CDS, defineArchivedModules, void, $ClassLoader*, $ClassLoader*)},
		{"drainOutput", "(Ljava/io/InputStream;JLjava/lang/String;Ljava/util/List;)Ljava/lang/String;", "(Ljava/io/InputStream;JLjava/lang/String;Ljava/util/List<Ljava/lang/String;>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(CDS, drainOutput, $String*, $InputStream*, int64_t, $String*, $List*)},
		{"dumpClassList", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CDS, dumpClassList, void, $String*)},
		{"dumpDynamicArchive", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CDS, dumpDynamicArchive, void, $String*)},
		{"dumpSharedArchive", "(ZLjava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, dumpSharedArchive, void, bool, $String*), "java.lang.Exception"},
		{"generateLambdaFormHolderClasses", "([Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, generateLambdaFormHolderClasses, $ObjectArray*, $StringArray*)},
		{"getRandomSeedForDumping", "()J", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(CDS, getRandomSeedForDumping, int64_t)},
		{"initializeFromArchive", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC | $NATIVE, $staticMethod(CDS, initializeFromArchive, void, $Class*)},
		{"isBasicTypeChar", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, isBasicTypeChar, bool, char16_t)},
		{"isDumpingArchive", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(CDS, isDumpingArchive, bool)},
		{"isDumpingArchive0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CDS, isDumpingArchive0, bool)},
		{"isDumpingClassList", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(CDS, isDumpingClassList, bool)},
		{"isDumpingClassList0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CDS, isDumpingClassList0, bool)},
		{"isSharingEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(CDS, isSharingEnabled, bool)},
		{"isSharingEnabled0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CDS, isSharingEnabled0, bool)},
		{"isValidHolderName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, isValidHolderName, bool, $String*)},
		{"isValidMethodType", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, isValidMethodType, bool, $String*)},
		{"lambda$drainOutput$0", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CDS, lambda$drainOutput$0, void, $InputStream*, $String*, $List*)},
		{"logLambdaFormInvoker", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CDS, logLambdaFormInvoker, void, $String*)},
		{"traceLambdaFormInvoker", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CDS, traceLambdaFormInvoker, void, $String*, $String*, $String*, $String*)},
		{"traceSpeciesType", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CDS, traceSpeciesType, void, $String*, $String*)},
		{"validateInputLines", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(CDS, validateInputLines, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.misc.CDS",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CDS, name, initialize, &classInfo$$, CDS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CDS);
	});
	return class$;
}

$Class* CDS::class$ = nullptr;

		} // misc
	} // internal
} // jdk