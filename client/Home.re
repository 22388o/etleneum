let component = ReasonReact.statelessComponent("Home");

[@bs.module "./markdown.js"] external markdown: string => string = "markdown";

let make = _children => {
  ...component,
  render: _self =>
    <div id="home">
      <header>
        <h1> {ReasonReact.string("etleneum")} </h1>
        <p>
          {ReasonReact.string("the centralized smart contract platform")}
        </p>
      </header>
      <section className="items">
        <div>
          <img src="/static/worker-digging-a-hole.svg" />
          <h1> {ReasonReact.string("No proof-of-work")} </h1>
          <p>
            {ReasonReact.string(
               "You think proof-of-work is destroying the enviroment? Etleneum was made for you. Different from Ethereum, which uses proof-of-work, despite all the talk against it, Etleneum doesn't use anything like that. Our consensus process doesn't require that because our network has only one node and data stored in a single Postgres database.",
             )}
          </p>
        </div>
        <div>
          <img src="/static/eye-open.svg" />
          <h1> {ReasonReact.string("Oracle problem solved")} </h1>
          <p>
            {ReasonReact.string(
               "Since our consensus rules and trust model are different from Ethereum and we do not require or use a blockchain at all, we're free to query the time from the OS or make GET requests to get data from the internet. You can use these features in your contracts to create contracts that are not only smart, but also knowledgeable.",
             )}
          </p>
        </div>
        <div>
          <img src="/static/moon-phase-outline.svg" />
          <h1> {ReasonReact.string("Lua, not Sol")} </h1>
          <p>
            {ReasonReact.string(
               "Etleneum's smart contracts are written in Lua, a real programming language, and not Solidity or other bizarre stuff. If you can write one standalone Lua function that modifies a global state you're pretty much ready to launch your Etleneum contract, no need to do a 6-month course on Truffle just to discover everything has changed.",
             )}
          </p>
        </div>
      </section>
      <article
        dangerouslySetInnerHTML={
          "__html":
            markdown(
              "
# How does it work

1. Write a smart contract
2. Call the smart contracts methods
3. Done

We should have a better explanation here, but for now please read the [docs](/docs).
    ",
            ),
        }
      />
      <article
        dangerouslySetInnerHTML={
          "__html":
            markdown(
              "
# FAQ

1. What can do with Etleneum?

Well, you can do a lot of things. We should have a list of examples somewhere, but you can start by looking at https://stateofthedapps.com/ for inspiration (or maybe not, you'll end up building a game of collectible fake animals).

Oh, remember all our [API](/docs) methods are [CORS](https://developer.mozilla.org/en-US/docs/Web/HTTP/CORS)-enabled, so you can build single-page static web applications with just JavaScript, but superpower them with Etleneum contracts on the back!

2. Is it better than Ethereum?

Of course!

3. It can't be better than Ethereum. It's centralized!

Yes, you are probably right. Infura has a lot more of engineers and a much better infrastructure than us, so they offer a much fancier website, personal support 24/7 and more uptime guarantees. If you're running an ICO you should probably choose Ethereum.

4. Why did you choose Lua as the programming language?

Because we're following the steps of the Ethereum community, so we wanted a language no one is very familiar with, but is still easy and dynamic with lots of room for bugs to appear.

5. Your background color is awful. Can I change it?

Yes. Visit our [background hue setter contract](/contract/ew0u7ipyp) and you'll be able to change it!

6. What are the privacy policy and terms of service?

All we store is what is public and you can see from in this website. This is alpha-quality software. We may get hacked, lose our database or delete our Lightning node database at anytime and we can't offer any guarantee whatsoever, so please proceed wisely. Actually since we allow arbitrary code execution we will probably get hacked sooner than you can imagine. It also must be said that we reserve the right to delete contracts and do other forms of evil if we think they're malicious or spammy.

7. Are you going to get hacked?

Probably.

8. How do you plan on funding the platform?

We charge for making contracts and calls. It's cheap, but maybe we'll increase that later.

9. Do contracts last forever?

No. If they're inactive for a lot of time we may delete them. We will also delete spammy or malicious stuff. Actually we don't intend to delete anything, but just saying this here just in case we must for some reason.

9. Where can I talk about Etleneum and ask for help?

In [our Telegram group](https://t.me/etleneum).

10. Is this Sam's or ship resistant?

Yes. Our founder isn't called Sam, but since we are in the center of the continent I believe no ship will be able to get here. Centralization isn't all bad after all.
    ",
            ),
        }
      />
    </div>,
};
