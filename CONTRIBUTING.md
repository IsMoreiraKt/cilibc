# Contributing to CILibc

First of all, thank you for your interest in contributing to CILibc. 🙌

All types of contributions are welcome and highly appreciated. This document aims to guide new contributions, help keep the project organized, and ensure a positive experience for everyone involved.

Whether you're an experienced developer, someone new to open source, or just someone who spotted an improvement, your help matters.

> If you don’t have time to contribute code at the moment, there are still many ways to support the project:
>
> - "Star the repository on GitHub"
> - "Share the project with colleagues and online"
> - "Reference it in articles, tutorials, or other projects"
> - "Report issues or suggest improvements"

##### Table of Contents

- [Before You Begin](#before-you-begin)
- [Getting Help](#getting-help)
- [Reporting Bugs](#reporting-bugs)
- [Suggesting Enhancements](#suggesting-enhancements)
- [First-Time Contributions](#first-time-contributions)
- [Automated Testing](#automated-testing)
- [Documentation](#documentation)
- [Code Style](#code-style)
- [Commits and Pull Requests](#commits-and-pull-requests)
- [Communication](#communication)

### Before You Begin

Before submitting a contribution, please:

- Ensure you're using the latest version of the project.
- Review the [official documentation](./docs/) to understand how the project works.
- Read through the [issue templates](./.github/ISSUE_TEMPLATE/) and [pull request templates](./.github/pull_request_template.md).
- Confirm your contribution complies with the project license (BSD-3-Clause).

### Getting Help

If you have a question:

- Check the [documentation](./docs/).
- See if a related question already exists in [issues](https://github.com/CIntrinsic/cilibc/issues).
- If not, you’re welcome to open a [new issue](https://github.com/CIntrinsic/cilibc/issues/new) or join an [ongoing discussion](https://github.com/CIntrinsic/cilibc/discussions).

Currently, the primary communication channel is [GitHub Discussions](https://github.com/CIntrinsic/cilibc/discussions). We plan to transition to a mailing list in the future.

### Reporting Bugs

If you encounter a technical issue, you’re encouraged to report it. To make the process more effective, please follow the steps below.

##### Before Reporting

- Ensure the issue is not caused by a misconfiguration or local environment.
- Search for existing issues to avoid duplicates.
- Prepare the following information:
  - OS, architecture, and compiler details
  - Commands used to build and run
  - Terminal output (stdout, stderr, exit code)
  - Reproduction steps, ideally minimal and self-contained

##### How to Report

- Use the appropriate issue template when opening a bug report.
- Clearly describe the expected behavior and what actually happened.
- Include relevant code snippets or examples.
- Provide context and reproduction instructions whenever possible.

> Security-related issues should be disclosed privately by email. Please do not post sensitive information publicly.

### Suggesting Enhancements

Have an idea for an improvement? Great!

Before opening a feature request:

- Confirm that the feature doesn’t already exist.
- Search for previous proposals or similar discussions.
- Consider whether the suggestion aligns with the goals and scope of the project.

When opening an enhancement suggestion:

- Use a clear, descriptive title.
- Explain what you propose and why.
- Describe the current behavior and what the expected behavior would be.
- Provide examples or comparisons with other implementations, if helpful.

### First-Time Contributions

If this is your first time contributing, we recommend:

1. Clone the repository
2. Build the project using autobot:

```shell
./autobot --compile
./autobot --test
```

3. Ensure all tests pass
4. Pick an issue labeled good **first issue** or **help wanted**

Your contribution should include:

- Working, well-structured code
- Corresponding tests (updated or new)
- Documentation updates if needed

### Automated Testing

Tests are written in C and executed using a Python-based automation framework built on **unittest**.

Tests are validated based on:

- Standard output (stdout)
- Error output (stderr)
- Return codes

To create a new test, use the existing ones in the **tests/** directory as references. Each test should be reproducible and isolated.

### Documentation

If your change affects functionality or behavior, please update the relevant documentation.

Tips:

- Write in clear, accessible language.
- Prefer concrete examples over abstract explanations.
- Avoid vague justifications (e.g., “because I wanted to”).
- Use diagrams or images where appropriate.

### Code Style

We use **clang-format** to enforce code style. The project includes a **.clang-format** file that defines the formatting rules.

Please:

- Run **clang-format** before submitting code.
- Avoid unrelated formatting changes in otherwise unmodified files.
- Keep the code readable and only comment where it adds meaningful clarity.

### Commits and Pull Requests

##### Commits

- Use clear, descriptive commit messages.
- Prefix messages with the affected module (e.g., **stdlib: implement strtoull**)
- Avoid generic messages like **update** or **fix**

##### Pull Requests

- Follow the [pull request template](./.github/pull_request_template.md).
- Provide context for the change in the PR description.
- Ensure that all tests pass before submitting.
- Maintainers may suggest improvements or request changes during review.

### Communication

Currently, [GitHub Discussions](https://github.com/CIntrinsic/cilibc/discussions) is our main channel for community engagement. A dedicated mailing list will be introduced in the future to support deeper technical discussions.

---

Thank you again for your interest in contributing. We’re excited to build a stronger, more useful, and more inclusive project together.
