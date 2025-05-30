# autobot verbose

Enables verbose output. Overrides the default quiet mode.

This flag increases the level of detail shown during command execution. Useful for debugging, inspecting internal operations, or understanding step-by-step behavior.

By default, autobot runs in quiet mode and suppresses non-critical output.

### Logging Levels

When --verbose is enabled, messages from the following log levels will be displayed:

- DEBUG
- MESSAGE
- INFO
- WARNING
- ERROR
- CRITICAL

### Usage

```shell
./autobot --verbose
./autobot -v
```
