OpenCover.Console.exe -register:user -target:..\..\..\tools\NUnit-2.6.0.12051\bin\nunit-console-x86.exe -targetargs:"OpenCover.Test.dll /noshadow" -filter:"+[Open*]* -[OpenCover.T*]*" -coverbytest:*.Test.dll -output:opencovertests.xml
