# Final AFL++ Fuzzing Results

## Targets

1. test.c
2. crash_test.c
3. cJSON
4. TinyXML2

## cJSON

- Instrumented Locations: 991
- Runtime: 30 minutes
- Corpus Count: 428
- New Edges: 73
- Crashes: 0

## TinyXML2

- Instrumented Locations: 1928
- Runtime: 30 minutes
- Corpus Count: 643
- New Edges: 120
- Crashes: 0

## Comparative Observation

TinyXML2 produced the highest corpus growth and edge discovery, followed by cJSON. The educational test.c target was useful for learning AFL++ workflow but provided limited coverage.
